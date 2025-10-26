#include <iostream>
using namespace std;
class Vehicle
{

protected:
    int basePremium = 5000;
    int safetyDiscount = 15;

public:
    // Include necessary getter and setter methods
    void set(){
        basePremium = 5000;
        safetyDiscount = 15;
    }
    int getBasePremium(){
        return basePremium;
    }
    int getSafetyDiscount(){
        return safetyDiscount;
    }
};
class Car : public Vehicle
{
public:
    char findCategory(int engineCC)
    {
        // Implement your code
        if(engineCC >= 1000 && engineCC <= 1500){
            return 'E';
        }
        if(engineCC > 1500 && engineCC <= 2000){
            return 'S';
        }
        if(engineCC > 2000){
            return 'P';
        }
        return 'U'; // Default category if none of the above conditions are met
    }
};
class LuxuryCar : public Car
{
public:
    int calculatePremium(char category)
    {
        // Implement your code
        int finalPremium = getBasePremium() - ((getBasePremium() * getSafetyDiscount())/100);
        if(category == 'E'){
            return finalPremium + 1000;
        }
        else if (category == 'S'){
            return finalPremium + 2500;
        }
        else{
            return finalPremium + 5000;
        }
    }
};
int main()
{
    int capacity;
    cout << "Enter engine capacity (CC): ";
    cin >> capacity;
    // Fill the code here
    //Car c;
    LuxuryCar l;
    char cat=l.findCategory(capacity);
    cout << "Vehicle Category : " << cat << endl;
    int prem=l.calculatePremium(cat);
    cout << "Insurance Premium (in $) : " << prem << endl;
    return 0;
}