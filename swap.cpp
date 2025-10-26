#include <iostream>
using namespace std;

void swap(string &x, string &y);

int main() {
    string x = "Lionel Messi";
    string y = "Cristiano Ronaldo";

    swap(x, y);

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}

void swap(string &x, string &y) {
    string temp = x;
    x = y;
    y = temp;
    // cout << "x: " << &x << endl;
    // cout << "y: " << &y << endl;
}