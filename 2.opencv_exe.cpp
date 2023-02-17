
#include <iostream>
#include <opencv2/opencv.hpp>

#ifdef _DEBUG
#pragma comment(lib,"opencv_world470d.lib")
#else	//RELEASE
#pragma comment(lib,"opencv_world470.lib")
#endif
//void main() 표준아님

using namespace std;
using namespace cv;

int main()
{   
    cout << "Hello OpenCV World!\n";
    string fileName = "jetson.bmp";
    Mat img = cv::imread(fileName,IMREAD_COLOR);  // 4 = row * with(알수있는정보)+ col
    int width = img.cols*3;
    int height = img.rows;
    unsigned char* pData = img.data;
    
    
    //mask processing

    int mask_width = 3*3; int mask_height = 3;
    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            int index = row * width + col;
            if (row >= 0 && row < mask_height) {

                if (col >= 0 && col < mask_width) {
                    pData[index] = 255;
                }
                if (col>=(width-mask_width)) {
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
      
    return 0;//int 반환 
}


/* 흑백
    int mask_width = 3; int mask_height = 3;
    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            int index = row * width + col;
            if (row >= 0 && row < mask_height) {

                if (col >= 0 && col < mask_width) {
                    pData[index] = 255;
                }

                if (col>=(width-mask_width)) {
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


    return 0;//int 반환
}

*/
