// week2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;
int main()
{
	cv::Mat dispMat=imread("C:\\Users\\27318\\Desktop\\大二下网络课程\\数字图像\\week2.png");
	cv::Point pt,pt1,pt2;
	pt.x = 200;
	pt.y = 200;
	circle(dispMat, pt, 40, CV_RGB(255, 0, 0), 1, 8, 0);
	pt1.x = 100;
	pt1.y = 100;
	pt2.x = 30;
	pt2.y = 30;
	line(dispMat, pt1, pt2, CV_RGB(255, 0, 0), 1, 8, 0);
	cv::Rect rect;
	rect.x = 10;
	rect.y = 10;
	rect.width;
	rect.height;
	rectangle(dispMat, rect, CV_RGB(255, 0, 0), 1, 8, 0);
	imshow("img", dispMat);
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
