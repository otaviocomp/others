#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main(){
	Mat image, grayImage, contorno, contorno1, contorno2, prewittX, prewittY, mask, result;
	VideoCapture cap;

	//filtro para deteção de bordas
	prewittX = (Mat_<float>(3, 3) << 1, 1, 1, 0, 0, 0, -1, -1, -1);
	prewittY = (Mat_<float>(3, 3) << 1, 0, -1, 1, 0, -1, 1, 0, -1);

	cap.open(0);
	cap >> image;		
	cvtColor(image, grayImage, CV_BGR2GRAY); //converte para imagem em preto e branco
	filter2D(grayImage, contorno1, -1, prewittX);
	filter2D(grayImage, contorno2, -1, prewittY);
	addWeighted(contorno1, 1, contorno2, 1, 0.0, contorno);
    imshow("image", contorno);
	waitKey();
}
