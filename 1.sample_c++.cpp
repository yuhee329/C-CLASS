
#include <iostream>
#include <string>
#include <vector>
using namespace std;;
#define AAA "aaa"
#define PI 3.14

//void main()
int main()
{

    const char* const_AAA = "aaa";
    const float const_PI = 3.14;
    //const_PI = 4.123;
    //10=a1;
   
    const bool bComp = false; //BOOL - 4byte ,bool -1byte
    const int const_int = 100;
    const std::string const_str = "abcd";
    std::string str_a = "a";
    std::string str_b = "b";
    string str_c = "c";
    string str_d = "d";
         
    int a = 0; int b(0);
    std::cout << "Hello World!\n";
    

    int arrimg[25] = { 0, };
    arrimg[5] = 5;
    arrimg[6] = 6;
    arrimg[7] = 7;
    arrimg[8] = 8;

    std::vector<int>vimg(5);

    int sz_int = sizeof(int); 

    float f_data = 1.23;
    int n_data = f_data;//c_style
    n_data = static_cast<int>(f_data);//c++_style
    const char* const_string = "ABC";
    char* msg = const_cast<char*>(const_string);
    msg[0] = 'D';
    //std::cout << const_string << std::endl;
    std::cout << msg << std::endl;

    //f_data
    //??=(int)f_data; 임시객체
    //n_data = ?? 임시객체소멸
    

    //static_cast
    char cNum = 'a';
    int* pNum = nullptr;
    pNum = (int*)(&cNum); // c - style
   // pNum = static_cast<int*>(&cNum);//c++_style
    *pNum = 5;
    return 0;//int 반환
}
