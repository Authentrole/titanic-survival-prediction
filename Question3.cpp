#include <iostream>
#include <string>
using namespace std;

class Employee {
    private:
        static int count;
        int employeeId;
        string employeeName;
        double salary;
        double netSalary;

    public:
        void setEmployeeId(int id){employeeId = id;}
        void setEmployeeName(string name){employeeName=name;}
        void setSalary(double sal){salary=sal;}
        void setNetSalary(double net){netSalary=net;}

        int getEmployeeId(){return employeeId;}
        string getEmployeeName(){return employeeName;}
        double getSalary(){return salary;}
        double getNetSalary(){return netSalary;}

        void getEmployeeDetails(){
            string name;
            double sal;
            cout << "Enter Name:" << endl;
            cin >> name;
            setEmployeeName(name);

            cout << "Enter salary (in dollars):" << endl;
            cin >> sal;
            setSalary(sal);
        }

        static int generateEmployeeId(){
            return count++;
        }

        void calculateNetSalary(int percentage){
            double pfAmount = getSalary() * percentage/100.0;
            setNetSalary(getSalary()-pfAmount);
        }

        void display(){
            cout << "Id: " << getEmployeeId() << endl;
            cout << "Name: " << getEmployeeName() << endl;
            cout << "Net Salary (in dollars): " << (int)getNetSalary() <<endl;
        }
};

int Employee :: count = 100;

int main(){
    Employee Emp;
    Emp.getEmployeeDetails();
    int eid=Employee::generateEmployeeId();
    Emp.setEmployeeId(eid);
    int percentage;
    cout << "Enter PF percentage:" << endl;
    cin >> percentage;
    Emp.calculateNetSalary(percentage);
    Emp.display();
    return 0;
}