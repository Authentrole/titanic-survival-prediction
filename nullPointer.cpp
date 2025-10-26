#include <iostream>

using namespace std;

int main(){
    int *pointer = nullptr;
    int age = 39;
    
    pointer = &age;

    if (pointer == nullptr){
        cout << "address was not assigned" << endl;
        //cout << *pointer << endl;
    }
    else{
        cout << "address was assigned" << endl;
        cout << pointer << endl;
        cout << *pointer << endl;
    }
    return 0;
}