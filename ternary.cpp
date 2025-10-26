#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
    int grade;
    cout << "Enter your grade: ";
    cin >> grade;

    grade >= 60 ? cout << "You passed!" << endl : cout << "You failed!" << endl;

    return 0;
}