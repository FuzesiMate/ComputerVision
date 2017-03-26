cmake_minimum_required(VERSION 3.4)
SET(PROJECT_NAME Application)
project(${PROJECT_NAME})

file(GLOB MAIN_SOURCES ${CMAKE_SOURCE_DIR}/Application/src/*.cpp)

add_executable(${PROJECT_NAME} ${MAIN_SOURCES})

SET(CV_DEBUG "${CMAKE_BINARY_DIR}/ComputerVision/Debug/ComputerVision.lib")
SET(CV_RELEASE "${CMAKE_BINARY_DIR}/ComputerVision/Release/ComputerVision.lib")

target_link_libraries(${PROJECT_NAME} debug ${CV_DEBUG})
target_link_libraries(${PROJECT_NAME} optimized ${CV_RELEASE})

SET(DEBUG_LIBS opencv_core320d opencv_highgui320d opencv_calib3d320d opencv_videoio320d opencv_imgproc320d opencv_aruco320d xiapi32 tbb_debug tbbmalloc_debug tbbmalloc_proxy_debug libzmq_debug ws2_32)
SET(RELEASE_LIBS opencv_imgcodecs320 opencv_core320 opencv_highgui320 opencv_calib3d320 opencv_videoio320 opencv_imgproc320 opencv_aruco320 xiapi32 tbb tbbmalloc tbbmalloc_proxy libzmq ws2_32)

foreach (_dlib ${DEBUG_LIBS})

	target_link_libraries(${PROJECT_NAME} debug ${_dlib})
endforeach()

foreach (_rlib ${RELEASE_LIBS})
MESSAGE( STATUS "LIB: " ${_rlib} )
	target_link_libraries(${PROJECT_NAME} optimized ${_rlib})
endforeach()
