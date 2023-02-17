
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
    int width = img.cols; //gray
    // int width = img.cols * 3; color
    
    int height = img.rows;
    unsigned char* pData = img.data;
    //mask processing
    

    /* gray
    
    int mask_width = 3; int mask_height = 3;
    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            int index = row * width + col;
            if (row >= 0 && row < mask_height) {

                if (col >= 0 && col < mask_width) {
                    pData[index] = 255;
                }

                if (col >= (width - mask_width)) {
                    pData[index] = 255;
                }

            }if (row >= (height - mask_height)) {

                if (col >= 0 && col < mask_width) {
                    pData[index] = 255;
                }
                if (col >= (width - mask_width)) {
                    pData[index] = 255;
                }
            }
        }

    }

    return 0;

    // color
    int mask_width = 3 * 3; int mask_height = 3;
    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            int index = row * width + col;
            if (row >= 0 && row < mask_height) {

                if (col >= 0 && col < mask_width) {
                    pData[index] = 255;
                }
                if (col >= (width - mask_width)) {
                    pData[index] = 255;
                }

            }if (row >= (height - mask_height)) {

                if (col >= 0 && col < mask_width) {
                    pData[index] = 255;
                }

                if (col >= (width - mask_width)) {
                    pData[index] = 255;
                }
            }
        }
    }
    return 0;
}

    //threshold 

    int threshold = 100;
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
}*/
