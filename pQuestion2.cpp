#include <iostream>
#include <cmath>
#include <string>
using namespace std;
class Account
{
public:
    virtual double calculateInterest() = 0;
};
class SavingsAccount : public Account
{
private:
    double principal;
    int tenure;

public:
    // Fill getters and setters
    void setP(double p)
    {
        principal = p;
    }
    void setT(int t)
    {
        tenure = t;
    }
    double getP()
    {
        return principal;
    }
    int getT()
    {
        return tenure;
    }
    double calculateInterest() override
    {
        // Fill code here
        return getP();
    }
};
class FixedDeposit : public SavingsAccount
{
private:
    double interestRate;

public:
    // Fill getters and setters
    void setIR(double r)
    {
        interestRate = r;
    }
    double getIR()
    {
        return interestRate;
    }
    double calculateInterest() override
    {
        // Fill code here
        double prin = getP();
        int tenure = getT();
        double rate = getIR();
        double amount = prin * pow((1 + (rate/100.0)), tenure);
        return amount;
    }
};
int main()
{
    string accountType;
    cout << "Enter account type:" << endl;
    cin >> accountType;
    // Fill the code here
    if (accountType == "FixedDeposit")
    {
        FixedDeposit fd;
        double principal, rate;
        int tenure;

        cout << "Enter principal amount (in dollars):" << endl;
        cin >> principal;
        cout << "Enter tenure (in years):" << endl;
        cin >> tenure;
        cout << "Enter interest rate:" << endl;
        cin >> rate;

        fd.setP(principal);
        fd.setT(tenure);
        fd.setIR(rate);

        double maturity = fd.calculateInterest();

        cout << "The maturity amount for FixedDeposit is: " << maturity << " dollars" << endl;
    }
    else
    {
        cout << "Account type not supported in this example." << endl;
    }
    return 0;
}