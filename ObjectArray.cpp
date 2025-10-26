#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId()
    {
        salary = 122;
        cout << "Enter Employee ID" << endl;
        cin >> id;
    }
    void getId()
    {
        cout << "The Id of this Employee is " << id << endl;
    }
};

int main()
{
    // Employee Messi, Ronaldo, Neymar, Kane;

    // Neymar.setId();
    // Neymar.getId();

    Employee fbi[4];
    for (int i = 0; i < 4; i++)
    {
        fbi[i].setId();
        fbi[i].getId();
    }
    return 0;
}