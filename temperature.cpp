#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
    double temp;
    char unit;

    cout << "Temperature Converter" << endl;
    cout <<"F = Fahrenheit" << endl;
    cout <<"C = Celsius" << endl;
    cout <<"What unit do you want to convert to (F or C)? ";
    cin >> unit;

    if(unit == 'F' || unit == 'f'){
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        double fahrenheit = (temp * 9.0/5.0) + 32.0;
        cout << temp << "C is " << fahrenheit << "F" << endl;
    } else if(unit == 'C' || unit == 'c'){
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        double celsius = (temp - 32.0) * 5.0/9.0;
        cout << temp << "F is " << celsius << "C" << endl;
    } else {
        cout << "Invalid unit entered." << endl;
    }

    return 0;
}