#include <iostream>

class Human{
    public :
        std::string name = "Pep";
        std::string occupation = "Coach";
        int age = 55;

        void eat(){
            std::cout << "This person is eating\n";
        }
        void drink(){
            std::cout << "This person is drinking\n";
        }
        void sleep(){
            std::cout << "This person is sleeping\n";
        }
};

int main(){
    Human human1;
    // human1.name = "Messi";
    // human1.occupation = "Footballer";
    // human1.age = 38;

    std::cout << human1.name << std::endl;
    std::cout << human1.occupation << std::endl;
    std::cout << human1.age << std::endl;

    human1.eat();
    human1.drink();
    human1.sleep();

    std::cout << std::endl;

    Human human2;
    // human2.name = "Ronaldo";
    // human2.occupation = "Youtuber";
    // human2.age = 40;

    std::cout << human2.name << std::endl;
    std::cout << human2.occupation << std::endl;
    std::cout << human2.age << std::endl;

    human2.eat();
    human2.drink();
    human2.sleep();

    return 0;
}