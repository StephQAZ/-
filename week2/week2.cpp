// week2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;
int main()
{
	cv::Mat srcMat = imread("C:\\Users\\27318\\Desktop\\大二下网络课程\\数字图像\\week2.png", 0);
	int height = srcMat.rows;
	int width = srcMat.cols;
	int pixels[256];
	float histgram[256];
	for (int i = 0; i < 256; i++) {
		histgram[i] = 0;
	}
	for (int j = 0; j < height; j++) {
		for (int i = 0; i < width; i++) {
			histgram[srcMat.at<uchar>(j, i)]++;
		}
	}
	cv::Mat dstMat(height, 256, CV_8U, Scalar(255));
	cv::Point pt[256];
	cv::Point hengzhou;
	hengzhou.y = height;
	for (int i = 0; i < 256; i++) {
		pt[i].x = i;
		pt[i].y = height - histgram[i];
		hengzhou.x = i;
		line(dstMat, hengzhou, pt[i], CV_RGB(0, 0, 0), 2, 8, 0);
	}
	imshow("dstMat", dstMat);
	waitKey(0);
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
