
#include <iostream>
#include <opencv2/opencv.hpp>

#ifdef _DEBUG
#pragma comment(lib,"opencv_world470d.lib")
#else	
#pragma comment(lib,"opencv_world470.lib")
#endif


using namespace std;
using namespace cv;


int main()
{
    cout << "Hello OpenCV World!\n";
    string fileName = "jetson.bmp";
    Mat img = cv::imread(fileName, IMREAD_GRAYSCALE);  
    int width = img.cols ;
    int height = img.rows;
    int Channels = img.channels();
    unsigned char* pData = img.data; 
  
    int threshold = 200;
    Mat thrImg;
    cv::threshold(img, thrImg, threshold, 255, THRESH_BINARY);

    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            int index = row * width + col;

            if (pData[index] > threshold) {
                pData[index] = 255;
            }

            else {
                pData[index] = 0;
            }
        }
    }
            return 0;
}
