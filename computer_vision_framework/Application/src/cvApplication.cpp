//============================================================================
// Name        : cvApplication.cpp
// Author      : Fuzesi MAte
// Version     :
// Copyright   : Your copyright notice
// Description : Computer Vision framework usage example in C++, Ansi-style
//============================================================================

#include <iostream>
#include "ComputerVision.h"
#include <iostream>
#include <fstream>
#include <tbb/compat/thread>
#include <tbb/tbb.h>

#include <opencv2/aruco.hpp>

using namespace std;

int main(int argc , char *argv[]) {

	if (argc < 2) {
		std::cout << "No command line argument!" << std::endl;
		return -1;
	}

	/*
	cv::Mat markerImage;
	cv::aruco::Dictionary dictionary = cv::aruco::getPredefinedDictionary(cv::aruco::DICT_4X4_100);

	cv::Ptr<cv::aruco::Dictionary> dict_ptr(&dictionary);

	cv::aruco::drawMarker(dict_ptr, 10 , 200, markerImage);

	cv::imwrite("aruco.png" , markerImage);
	*/
	
	//cv::VideoCapture cap;
	//cap.open(1);

	//cap.set(CV_CAP_PROP_FRAME_WIDTH, 1920);
	//cap.set(CV_CAP_PROP_FRAME_HEIGHT, 1080);
	//cap.set(CV_CAP_PROP_EXPOSURE, -8);
	////cap.set(CV_CAP_PROP_GAIN, 255);

	//if (!cap.isOpened()) {
	//	std::cout << "Camera Opened!" << std::endl;
	//}

	//cv::Mat m;

	//char k='a';

	//while (k != 'x') {

	//	auto time = std::chrono::steady_clock::now();

	//	cap.grab();
	//	cap.retrieve(m);

	//	auto endTime = std::chrono::steady_clock::now();

	//	auto diff = endTime - time;

	//	std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(diff).count() << std::endl;

	//	//std::cout << m.cols << "   " << m.rows << std::endl;

	//	std::vector< std::vector< cv::Point2f > > corners, rejected;
	//	std::vector<int> identifiers;
	//	try {
	//		cv::aruco::detectMarkers(m, cv::aruco::getPredefinedDictionary(cv::aruco::DICT_4X4_100), corners, identifiers);
	//		cv::aruco::drawDetectedMarkers(m, corners, identifiers);
	//	}
	//	catch (std::exception& e) {
	//		std::cout << e.what() << std::endl;
	//	}

	//	cv::imshow("frame", m);
	//	k = cv::waitKey(10);
	//}

	//cap.release();

	ComputerVision cvModule;

	std::ofstream out;

	char c='a';

	while(c!='q'){
		cin>>c;
		switch(c){
		case 's':
		{
			std::cout << "Initializing ComputerVision..."<<std::endl;

			if (!cvModule.initialize(argv[1])) {
				std::cout << "Failed to init!" << std::endl;
			}
			else {
				std::cout << "Init successful!" << std::endl;

				cout << "start processing thread..." << endl;

				tbb::tbb_thread processingThread(std::bind(&ComputerVision::startProcessing, &cvModule));
				processingThread.detach();
			}
			break;
		}
		case 'x':
			cvModule.stopProcessing();
			break;
		case 'r':
			cvModule.reconfigure(argv[1]);
			break;
		case 'g':
		{
				ModelData posdata;
				if (cvModule.getData(posdata)) {
					out.open("ex.json");
					out<<posdata.toJSON();
					out.close();
				}
				
			break;
		}
		default:
			cout<<"invalid"<<endl;
			break;
		}
	}

	return 0;
}
