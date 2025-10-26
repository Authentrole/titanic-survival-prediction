#include <iostream>

int main(){
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 100)
    {
        std::cout << "You are too old to enter." << std::endl;
    }
    else if(age < 0)
    {
        std::cout << "You are not born yet." << std::endl;
    }
    else if(age >= 18)
    {
        std::cout << "Welcome to the site." << std::endl;
    }
    else
    {
        std::cout << "Sorry, you must be at least 18 years old to enter." << std::endl;
    }
    return 0;
}