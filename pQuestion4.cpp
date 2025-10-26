#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Shape{
    public:
    virtual double calculateArea() = 0;
    //     cout << "Area Calculation";
    //     return 0;
};

class Circle : public Shape{
    private:
        int radius;
    public:
        void setRadius(int r){
            radius = r;
        }
        int getRadius() const{
            return radius;
        }
        double calculateArea(){
            return 3.14 * radius * radius;
        }
};

int main(){
    int radius;
    double result;
    Shape* s = new Circle;
    Circle c;
    cout << "Enter radius : " << endl;
    cin >> radius;
    c.setRadius(radius);
    //result = s->calculateArea();
    //cout << s->calculateArea() << endl;
    result = c.calculateArea();
    cout << "Area : " << result << endl;
    return 0;
}