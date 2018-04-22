#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main(){
	Mat image, logo, grayImage, contorno, contorno1, contorno2, laplacian, prewittX, prewittY, result;
	VideoCapture cap;

	//filtro para deteccao de bordas
	laplacian = (Mat_<float>(3, 3) << 1, 1, 1, 1, -8, 1, 1, 1, 1);
	prewittX = (Mat_<float>(3, 3) << 1, 1, 1, 0, 0, 0, -1, -1, -1);
	prewittY = (Mat_<float>(3, 3) << 1, 0, -1, 1, 0, -1, 1, 0, -1);

	cap.open(0); //liga a camera
	cap >> image; //captura a imagem
	cvtColor(image, grayImage, CV_BGR2GRAY); //converte para imagem em preto e branco
	filter2D(grayImage, contorno, -1, laplacian);
	filter2D(grayImage, contorno1, -1, prewittX);
	filter2D(grayImage, contorno2, -1, prewittY);
	cvtColor(contorno, image, COLOR_GRAY2BGR); //converte para imagem colorida
	logo = imread("image.png", CV_LOAD_IMAGE_COLOR);
	//addWeighted(contorno1, 1, contorno2, 1, 0.0, contorno);
	//logo.copyTo(contorno(Rect(image.cols - logo.cols, image.rows - logo.rows ,logo.cols, logo.rows)));
    imshow("image", image);
	waitKey();
}
