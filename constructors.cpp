#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;

    Student(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

int main(){

    Student student1("Spongebob", 25, 3.2);

    std::cout << student1.name << std::endl;
    std::cout << student1.age << std::endl;
    std::cout << student1.gpa << std::endl;
    return 0;
}