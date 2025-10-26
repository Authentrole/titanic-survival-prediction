#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;
    //int count = 0;

    public:
        void setData(void){
            cout << "Enter the id" << endl;
            cin >> id;
            count++;
        }
        void getData(void){
            cout << "The id of this Employee is " << id << "and this is employee number " << count << endl;
        }
        static void getCount(void){
            cout << "The value of count is " << count << endl;
        }
};

int Employee::count = 999;

int main()
{
    Employee Messi;
    Employee Ronaldo;
    Employee Kane;

    Messi.setData();
    Messi.getData();
    Employee::getCount();

    Ronaldo.setData();
    Ronaldo.getData();
    Employee::getCount();

    Kane.setData();
    Kane.getData();
    Employee::getCount();

    return 0;
}