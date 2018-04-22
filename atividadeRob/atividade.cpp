#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main(){
	Mat image, logo, grayImage, contorno, contorno1, contorno2, laplacian, prewittX, prewittY, result;
	VideoCapture cap;

	//mascaras dos filtros para deteccao de bordas
	prewittX = (Mat_<float>(3, 3) << 1, 1, 1, 0, 0, 0, -1, -1, -1);
	prewittY = (Mat_<float>(3, 3) << 1, 0, -1, 1, 0, -1, 1, 0, -1);

	cap.open(0); //liga a camera
	cap >> image; //captura a imagem
    if(!cap.isOpened()){ //testa se a camera esta disponivel
		cout << "cameras indisponiveis";
    	return -1;
	}
	cvtColor(image, grayImage, CV_BGR2GRAY); //converte para imagem em preto e branco
	filter2D(grayImage, contorno1, -1, prewittX); //filtro prewitt em X
	filter2D(grayImage, contorno2, -1, prewittY); //filtro prewitt em Y
	logo = imread("logo.jpg", 0);
	addWeighted( contorno1, 1, contorno2, 1, 0.0, contorno);
	
	//cola a logo e exibe o resultado
	logo.copyTo(contorno(Rect(contorno.cols - logo.cols, contorno.rows - logo.rows ,logo.cols, logo.rows)));
    imshow("image", contorno);
	waitKey();
}
