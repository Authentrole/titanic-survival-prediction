#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance = 0;
    int choice;

    do {
        std::cout << "Welcome to the Bank!" << std::endl;
        std::cout << "Enter your choice: " << std::endl;
        std::cout << "1. Show Balance" << std::endl;
        std::cout << "2. Deposit" << std::endl;
        std::cout << "3. Withdraw" << std::endl;
        std::cout << "4. Exit" << std::endl;

        std::cin.clear(); // Clear any error flags
        fflush(stdin); // Clear the input buffer

        std::cin >> choice;

        switch(choice){
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance = withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                std::cout << "Thank you for using the Bank. Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }    
    } while (choice != 4);
    
    return 0;
}

void showBalance(double balance){
    std::cout << "Your current balance is: $" << std::setprecision(2) << std::fixed << balance << std::endl;
}

double deposit(){
    double amount=0;
    std::cout << "Enter amount to deposit: $";
    std::cin >> amount;
    if(amount > 0){
        std::cout << "Deposited: $" << std::setprecision(2) << std::fixed << amount << std::endl;
        return amount;
    } else {
        std::cout << "Invalid deposit amount." << std::endl;
    }
    return 0;
}

double withdraw(double balance){
    double amount=0;
    std::cout << "Enter amount to withdraw: $";
    std::cin >> amount;
    if(amount > 0 && amount <= balance){
        std::cout << "Withdrew: $" << std::setprecision(2) << std::fixed << amount << std::endl;
        return balance - amount;
    } else if(amount > balance){
        std::cout << "Insufficient funds." << std::endl;
        return balance;
    } else {
        std::cout << "Invalid withdrawal amount." << std::endl;
        return balance;
    }
    return 0;
}