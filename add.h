#pragma once
#include <opencv2/opencv.hpp>  
#include <vector>  
//#include<iostream>

bool LayerOverlay(cv::Mat &dst, cv::Mat &src,
	double scale = 1.0, //整体透明度
	double size = 1.0,//图片缩放比例
	double angle = 0,//图片旋转角度
	cv::Point location = cv::Point(0, 0)//图片位置
)
{
	if (dst.channels() != 3 || src.channels() != 4 || location.x > dst.cols || location.y > dst.cols)
	{
		return false;
	}


	cv::Mat small_size = src.clone();

	if (size != 1 || angle != 0) {
		int width = src.cols > (dst.cols - location.x) ? (dst.cols - location.x) : src.cols;
		int length = src.rows > (dst.rows - location.y) ? (dst.rows - location.y) : src.rows;
		cv::Mat rotation = cv::getRotationMatrix2D(cv::Point2f(length / 2, width / 2), angle, size);
		cv::warpAffine(small_size, small_size, rotation, cv::Size(width, length));
	}
	//imshow("test", small_size);
	//std::cout << small_size.cols << " " << small_size.rows << std::endl;
	cv::Mat dst_part(dst, cv::Rect(location.x, location.y, small_size.cols, small_size.rows));

	std::vector<cv::Mat>src_channels;
	std::vector<cv::Mat>dst_channels;
	split(small_size, src_channels);
	split(dst_part, dst_channels);
	//	CV_Assert(src_channels.size() == 4 && dst_channels.size() == 3);

	if (scale < 1)
	{
		src_channels[3] *= scale;
		scale = 1;
	}
	for (int i = 0; i < 3; i++)
	{
		dst_channels[i] = dst_channels[i].mul(255.0 / scale - src_channels[3], scale / 255.0);
		dst_channels[i] += src_channels[i].mul(src_channels[3], scale / 255.0);
	}
	merge(dst_channels, dst_part);
	return true;
}

