#include <iostream>
using namespace std;

int main() {
    try {
        int age = 19;
        if (age < 18)
            throw age;  // Throw an int
        cout << "Access granted\n";
    }
    catch (int a) {
        cout << "Access denied. Age is: " << a << endl;
    }
    return 0;
}