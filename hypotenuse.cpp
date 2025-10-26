#include <iostream>
#include <cmath>

int main(){
    double a,b,c;

    std::cout<<"Enter side a: "<<std::endl;
    std::cin>>a;
    std::cout<<"Enter side b: "<<std::endl;
    std::cin>>b;

    c=sqrt(pow(a,2)+pow(b,2));
    std::cout<<"Hypotenuse is: "<<c<<std::endl;
    return 0;
}