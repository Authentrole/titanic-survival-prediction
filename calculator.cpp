#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
    char op;
    double num1, num2, result;

    cout << "Enter either (+ - * /): ";
    cin >> op;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            cout << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            if(num2 != 0){
                result = num1 / num2;
                cout << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error: Division by zero." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            break;
    }


    return 0;
}