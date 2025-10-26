#include <iostream>
#include <string>


struct Car {
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);
void paintCar(Car &car, std::string color);

int main() {
    Car car1;
    Car car2;

    car1.model = "LaFerrari";
    car1.year = 2013;
    car1.color = "Red";

    car2.model = "Revuelto";
    car2.year = 2024;
    car2.color = "Orange";

    paintCar(car1, "Black");
    paintCar(car2, "Yellow");

    //std::cout<< &car1 << std::endl;
    printCar(car1);
    printCar(car2);

    return 0;
}

void printCar(Car &car) {
    std::cout << car.model << std::endl;
    std::cout << car.year << std::endl;
    std::cout << car.color << std::endl;
    std::cout << &car  << std::endl;
    std::cout << std::endl;
}

void paintCar(Car &car, std::string color){
    car.color = color;
}