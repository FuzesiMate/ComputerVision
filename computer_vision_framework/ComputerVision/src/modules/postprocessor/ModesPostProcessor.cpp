#include "modules/postprocessor/ModesPostProcessor.h"
#include "logger/logger.h"
#include <opencv2/imgproc.hpp>
#include <opencv2/calib3d.hpp>

void ModesPostProcessor::loadMatrices(std::string path) {
	cv::FileStorage file;
	if (!file.open(path, cv::FileStorage::READ)) {
		throw std::exception("The file containing the matrices is missing!");
	}

	try {
		file["cameraMatrix"] >>camMatrix;
		file["distCoeffs"] >> distCoeffs;
		file.release();
	}
	catch (std::exception& e) {
		file.release();
		throw e;
	}
}

ModelData ModesPostProcessor::process(ModelData inData) {
	if (!validDetection) {
		tablePosition = inData.objectData["table"];

		if (tablePosition.markerData["left top"].tracked[0] && 
			tablePosition.markerData["right top"].tracked[0] &&
			tablePosition.markerData["left bottom"].tracked[0] && 
			tablePosition.markerData["right bottom"].tracked[0]) {
				initializeTablePositions(tablePosition);
				validDetection = true;
		}
	}
	if (validDetection) {
		for (auto& object : inData.objectData) {
			if (object.first != "table") {
				for (auto& marker : object.second.markerData) {
					if (marker.second.tracked[0]) {
						auto screenPosition = marker.second.screenPosition[0];
						std::vector<cv::Point2f> undistortedMarkerPosition;
						cv::undistortPoints(std::vector<cv::Point2f>{screenPosition}, undistortedMarkerPosition,
							camMatrix, distCoeffs, cv::noArray(), camMatrix);

						std::vector<cv::Point2f> transformedPoints;
						cv::perspectiveTransform(undistortedMarkerPosition, transformedPoints, perspective);
						marker.second.realPosition = cv::Point3f(transformedPoints[0].x + 15, transformedPoints[0].y + 15, 0);
						std::cout << marker.second.name << "    " << marker.second.realPosition << std::endl;
					}
				}
			}
		}
	}
	
	return inData;
}

float ModesPostProcessor::calculateDistance(cv::Point2f p1, cv::Point2f p2) {
	cv::Point2f diff = p1 - p2;
	return sqrtf(powf(diff.x, 2.0f) + powf(diff.y, 2.0f));
}

void ModesPostProcessor::initializeTablePositions(ObjectData table) {
	std::vector<cv::Point2f> distortedTablePoints =
	{
		tablePosition.markerData["left top"].screenPosition[0],
		tablePosition.markerData["right top"].screenPosition[0],
		tablePosition.markerData["left bottom"].screenPosition[0],
		tablePosition.markerData["right bottom"].screenPosition[0]
	};

	std::vector<cv::Point2f> undistortedTablePoints;

	cv::undistortPoints(distortedTablePoints, undistortedTablePoints, camMatrix, distCoeffs, cv::noArray(), camMatrix);

	std::vector<cv::Point2f> rectangle = { cv::Point2f(0,0) , cv::Point2f(220,0) , cv::Point2f(0,110) , cv::Point2f(220,110)};
	cv::Mat tr = cv::getPerspectiveTransform(undistortedTablePoints, rectangle);

	std::vector<cv::Point2f> transformedPoints;
	cv::perspectiveTransform(undistortedTablePoints, transformedPoints, tr);

	perspective = tr;

	leftTop = transformedPoints[0];
	rightTop = transformedPoints[1];
	leftBottom = transformedPoints[2];
	rightBottom = transformedPoints[3];
}
