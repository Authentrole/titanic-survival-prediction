#include <iostream>

using namespace std;

int main(){
    string name = "Messi";
    int age = 39;
    string freePizzas[5] = {"Pepperoni", "Hawaiian", "Veggie", "BBQ Chicken", "Meat Lovers"};
    
    string *pName = &name;
    int *pAge = &age;
    string *pFreePizzas = freePizzas;

    cout << *pName << endl;
    cout << *pAge << endl;
    cout << *(pFreePizzas+1) << endl;
    
    return 0;
}