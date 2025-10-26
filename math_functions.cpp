#include <iostream>
#include <cmath>

int main(){
    double x=3;
    double y=4;
    
    double z=std::max(x,y);
    std::cout<<z<<std::endl;
    
    double a=std::min(x,y);
    std::cout<<a<<std::endl;    

    double b=pow(x,y);
    std::cout<<b<<std::endl;

    double c=sqrt(9);
    std::cout<<c<<std::endl;

    double d=abs(-5.5);
    std::cout<<d<<std::endl;

    double e=round(5.24);
    std::cout<<e<<std::endl;

    double f=ceil(5.24);
    std::cout<<f<<std::endl;

    double g=floor(5.74);
    std::cout<<g<<std::endl;

    return 0;
}