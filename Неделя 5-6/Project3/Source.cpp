#include <iostream>
#include <cmath>

int main()
{
    //������ 1F
    float y,x;
    std::cout << "write x" << std::endl;
    std::cin>>x;
    if (x>5){
        y=2*x*x+10;
    }
    if(x==0){
        y=0;
    }
    if(x<5){
        y=2*fabs(x+6)-x*x;
    }
    std::cout<<"y= "<<y;


    //������ 1I
    float y,x;
    std::cout<<"write x"<< std::endl;
    std::cin>>x;
    if (x>7){
        y=2*x*x-3;
    }
    if(x==7){
        y=0;
    }
    if(x<7){
        y=2*fabs(x)+3;
    }
    std::cout<<"y= "<<y;


    //������ 3�
    float r = 1, R = 2; // ������ ����������
    float x, y;
    std::cin >> x >> y;
    float l;
    l = sqrt(x * x + y * y);
    if ((l > r) && (l < R))
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;
   

    //������ 2�
    float r = 1, R = 2; // ������ ����������
    float x, y;
    if ((y > (x * x - 2)) && (y < x) && (y < -x))
        std::cout << "Yes";
    else
        std::cout << "No";


}