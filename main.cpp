#include <opencv2/opencv.hpp>  
#include<string>
#include <cstdlib>
#include <time.h>
#include "add.h" 
using namespace cv;
using namespace std;

int main()
{
	//第一层
	cv::Mat img_a1 = imread("pic/A/a1.png", -1), img_a2 = imread("pic/A/a2.png", -1), img_a3 = imread("pic/A/a3.png", -1),
			img_a4 = imread("pic/A/a4.png", -1), img_a5 = imread("pic/A/a5.png", -1), img_a6 = imread("pic/A/a6.png", -1),
			img_a7 = imread("pic/A/a7.png", -1), img_a8 = imread("pic/A/a8.png", -1);
	//第二层
	cv::Mat img_b1 = imread("pic/B/b1.png", -1);
	//第三层
	cv::Mat img_c1 = imread("pic/C/c1.png", -1), img_c2 = imread("pic/C/c2.png", -1), img_c3 = imread("pic/C/c3.png", -1);
	//第四层
	cv::Mat img_d1 = imread("pic/D/d1.png", -1), img_d2 = imread("pic/D/d2.png", -1), img_d3 = imread("pic/D/d3.png", -1),
			img_d4 = imread("pic/D/d4.png", -1), img_d5 = imread("pic/D/d5.png", -1), img_d6 = imread("pic/D/d6.png", -1),
			img_d7 = imread("pic/D/d7.png", -1), img_d8 = imread("pic/D/d8.png", -1), img_d9 = imread("pic/D/d9 .png", -1);
	//第五层
	cv::Mat img_e1 = imread("pic/E/e1.png", -1), img_e2 = imread("pic/E/e2.png", -1), img_e3 = imread("pic/E/e3.png", -1),
			img_e4 = imread("pic/E/e4.png", -1), img_e5 = imread("pic/E/e5.png", -1), img_e6 = imread("pic/E/e6.png", -1),
			img_e7 = imread("pic/E/e7.png", -1), img_e8 = imread("pic/E/e8.png", -1), img_e9 = imread("pic/E/e9.png", -1),
			img_e10 = imread("pic/E/e10.png", -1);
	//第六层
	cv::Mat img_f1 = imread("pic/F/f1.png", -1), img_f2 = imread("pic/F/f2.png", -1), img_f3 = imread("pic/F/f3.png", -1),
			img_f4 = imread("pic/F/f4.png", -1), img_f5 = imread("pic/F/f5.png", -1);
	//第七层
	cv::Mat img_g1 = imread("pic/G/g1.png", -1), img_g2 = imread("pic/G/g2.png", -1), img_g3 = imread("pic/G/g3.png", -1),
			img_g4 = imread("pic/G/g4.png", -1), img_g5 = imread("pic/G/g5.png", -1), img_g6 = imread("pic/G/g6.png", -1),
			img_g7 = imread("pic/G/g7.png", -1), img_g8 = imread("pic/G/g8.png", -1), img_g9 = imread("pic/G/g9.png", -1),
			img_g10 = imread("pic/G/g10.png", -1), img_g11 = imread("pic/G/g11.png", -1);
	//第八层
	cv::Mat img_h1 = imread("pic/H/h1.png", -1), img_h2 = imread("pic/H/h2.png", -1), img_h3 = imread("pic/H/h3.png", -1);
	//第九层
	cv::Mat img_i1 = imread("pic/I/i1.png", -1), img_i2 = imread("pic/I/i2.png", -1), img_i3 = imread("pic/I/i3.png", -1),
			img_i4 = imread("pic/I/i4.png", -1), img_i5 = imread("pic/I/i5.png", -1);

	cv::Mat pic_a, pic_b, pic_c, pic_d, pic_e, pic_f, pic_g, pic_h, pic_i, img_output;

	int num=100;//生成图片数量

	srand((unsigned)time(NULL));//随机种子
	int a, b, c, d, e, f, g, h, i;//图层选择随机数定义
	int cancel_d, cancel_g, cancel_h, cancel_i;//图层屏蔽随机数定义


	while (num>0)
	{
		a = rand() % 8;
		b = rand() % 1;
		c = rand() % 3;
		d = rand() % 9;
		e = rand() % 10;
		f = rand() % 5;
		g = rand() % 11;
		h = rand() % 3;
		i = rand() % 5;

		switch (a)
		{
		case 0:pic_a = img_a1.clone(); break;
		case 1:pic_a = img_a2.clone(); break;
		case 2:pic_a = img_a3.clone(); break;
		case 3:pic_a = img_a4.clone(); break;
		case 4:pic_a = img_a5.clone(); break;
		case 5:pic_a = img_a6.clone(); break;
		case 6:pic_a = img_a7.clone(); break;
		case 7:pic_a = img_a8.clone(); break;
		default:break;
		}
		switch (b)
		{
		case 0:pic_b = img_b1.clone(); break;
		default:break;
		}
		switch (c)
		{
		case 0:pic_c = img_c1.clone(); break;
		case 1:pic_c = img_c2.clone(); break;
		case 2:pic_c = img_c3.clone(); break;
		default:break;
		}
		switch (d)
		{
		case 0:pic_d = img_d1.clone(); break;
		case 1:pic_d = img_d2.clone(); break;
		case 2:pic_d = img_d3.clone(); break;
		case 3:pic_d = img_d4.clone(); break;
		case 4:pic_d = img_d5.clone(); break;
		case 5:pic_d = img_d6.clone(); break;
		case 6:pic_d = img_d7.clone(); break;
		case 7:pic_d = img_d8.clone(); break;
		case 8:pic_d = img_d9.clone(); break;
		default:break;
		}
		switch (e)
		{
		case 0:pic_e = img_e1.clone(); break;
		case 1:pic_e = img_e2.clone(); break;
		case 2:pic_e = img_e3.clone(); break;
		case 3:pic_e = img_e4.clone(); break;
		case 4:pic_e = img_e5.clone(); break;
		case 5:pic_e = img_e6.clone(); break;
		case 6:pic_e = img_e7.clone(); break;
		case 7:pic_e = img_e8.clone(); break;
		case 8:pic_e = img_e9.clone(); break;
		case 9:pic_e = img_e10.clone(); break;
		default:break;
		}
		switch (f)
		{
		case 0:pic_f = img_f1.clone(); break;
		case 1:pic_f = img_f2.clone(); break;
		case 2:pic_f = img_f3.clone(); break;
		case 3:pic_f = img_f4.clone(); break;
		case 4:pic_f = img_f5.clone(); break;
		default:break;
		}
		switch (g)
		{
		case 0:pic_g = img_g1.clone(); break;
		case 1:pic_g = img_g2.clone(); break;
		case 2:pic_g = img_g3.clone(); break;
		case 3:pic_g = img_g4.clone(); break;
		case 4:pic_g = img_g5.clone(); break;
		case 5:pic_g = img_g6.clone(); break;
		case 6:pic_g = img_g7.clone(); break;
		case 7:pic_g = img_g8.clone(); break;
		case 8:pic_g = img_g9.clone(); break;
		case 9:pic_g = img_g10.clone(); break;
		case 10:pic_g = img_g11.clone(); break;
		default:break;
		}
		switch (h)
		{
		case 0:pic_h = img_h1.clone(); break;
		case 1:pic_h = img_h2.clone(); break;
		case 2:pic_h = img_h3.clone(); break;
		default:break;
		}
		switch (i)
		{
		case 0:pic_i = img_i1.clone(); break;
		case 1:pic_i = img_i2.clone(); break;
		case 2:pic_i = img_i3.clone(); break;
		case 3:pic_i = img_i4.clone(); break;
		case 4:pic_i = img_i5.clone(); break;
		default:break;
		}

		cancel_d = rand() % 10;
		cancel_g = rand() % 10;
		cancel_h = rand() % 10;
		cancel_i = rand() % 10;

		img_output = pic_a.clone();
		LayerOverlay(img_output, pic_b, 1, 1, 0, Point(0, 0));
		LayerOverlay(img_output, pic_c, 1, 1, 0, Point(0, 0));
		if (cancel_d<4)
			LayerOverlay(img_output, pic_d, 1, 1, 0, Point(0, 0));
		LayerOverlay(img_output, pic_e, 1, 1, 0, Point(0, 0));
		LayerOverlay(img_output, pic_f, 1, 1, 0, Point(0, 0));
		if (cancel_g<4)
			LayerOverlay(img_output, pic_g, 1, 1, 0, Point(0, 0));
		if (cancel_h < 4)
			LayerOverlay(img_output, pic_h, 1, 1, 0, Point(0, 0));
		if (cancel_i < 4)
			LayerOverlay(img_output, pic_i, 1, 1, 0, Point(0, 0));
		//imshow("组合图"+to_string(a)+ to_string(b)+to_string(c)+to_string(d), img_output);
		cv::imwrite("output/" + to_string(a) + to_string(b) + to_string(c) + to_string(d) + to_string(e)
			+ to_string(f) + to_string(g) + to_string(h) + to_string(i) + ".jpg", img_output);
		std::cout << "输出第" + to_string(a) + to_string(b) + to_string(c) + to_string(d) + to_string(e)
			+ to_string(f) + to_string(g) + to_string(h) + to_string(i) + "张" << endl;

		num--;
	}

	std::cout << endl;
	std::cout << "重要的事情说三遍！！！" << endl;
	std::cout << "输出完成!" << endl;
	std::cout << "输出完成!" << endl;
	std::cout << "输出完成!" << endl;
	std::cout << endl;

	cv::waitKey(0);
	std::system("pause");
	return 0;
}
