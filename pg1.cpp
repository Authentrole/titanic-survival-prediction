//typedef and type aliases

#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;

using number_t = int;
using text_t = std::string;

int main(){
    //std::string name = "John";
    text_t name = "John";
    number_t age = 21;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout <<(int)'a'<<std::endl;
    return 0;   
}