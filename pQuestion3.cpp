#include <iostream>
using namespace std;
class MenuItem
{
protected:
    int basePrice = 100;
    int memberDiscount = 20;

public:
    // Include getters and setters
    void setBasePrice(){
        basePrice = 100;
    }
    void setMemberDiscount(){
        memberDiscount = 20;
    }
    int getBasePrice(){
        return basePrice;
    }
    int getMemberDiscount(){
        return memberDiscount;
    }
};
class Food : public MenuItem
{
public:
    char findCategory(int spiceLevel)
    {
        // Implement your code
        if(spiceLevel >=1 && spiceLevel <=3){
            return 'M';
        }
        else if(spiceLevel >=4 && spiceLevel <=7){
            return 'S';
        }
        else if(spiceLevel >7){
            return 'H';
        }
        else{
            return 'F';
        }
    }
};
class Beverage : public Food
{
public:
    int calculatePrice(char category, bool isMember)
    {
        // Implement your code
        int p = getBasePrice();
        int d = getMemberDiscount();
        if(category == 'M'){
            p = p + 50;
        }
        if(category == 'S'){
            p = p + 75;
        }
        if(category == 'H'){
            p = p + 100;
        }
        if(isMember == 1){
            p = p - (p*d/100);
            return p;
        }
        else{
            return p;
        }
    }
};
int main()
{
    int spiceLevel;
    bool isMember;
    cout << "Enter spice level (1-10): ";
    cin >> spiceLevel;
    cout << "Are you a member? (1 for Yes, 0 for No): ";
    cin >> isMember;
    // Fill the code here
    Beverage b;
    char t = b.findCategory(spiceLevel);
    cout << "Food Category : " << t << endl;
    cout << "Total Price (in $) :" << b.calculatePrice(t,isMember);
    return 0;
}