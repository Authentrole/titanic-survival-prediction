#include <iostream>

using namespace std;

double getTotal(double prices[], int size);

int main(){
    double prices[] = {45.99, 23.50, 67.00, 12.30, 78.90};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total=getTotal(prices, size);

    cout << "Total: $" << total << endl;

    return 0;
}

double getTotal(double prices[], int size){
    double total=0;

    for(int i = 0; i < size; i++){
        total += prices[i];
    }

    // for(double price : prices){
    //     total += price;
    // }   

    return total;
}