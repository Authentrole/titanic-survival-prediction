#include <iostream>

class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

        void accelerate(){
            std::cout << "You step on the gas!\n";
        }
        void brake(){
            std::cout << "You step on the brakes!\n";
        }
};

int main(){
    Car car1;
    car1.make = "Mercedes-Benz";
    car1.model = "AMG GT 63";
    car1.year = 2023;
    car1.color = "Black";

    std::cout << car1.make << std::endl;
    std::cout << car1.model << std::endl;
    std::cout << car1.year << std::endl;
    std::cout << car1.color << std::endl;

    car1.accelerate();
    car1.brake();

    std::cout << std::endl;

    Car car2;
    car2.make = "BMW";
    car2.model = "M8 Competition";
    car2.year = 2022;
    car2.color = "Red";

    std::cout << car2.make << std::endl;
    std::cout << car2.model << std::endl;
    std::cout << car2.year << std::endl;
    std::cout << car2.color << std::endl;

    car2.accelerate();
    car2.brake();

    return 0;
}