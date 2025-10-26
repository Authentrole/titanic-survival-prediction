#include <iostream>

using namespace std;

int main(){
    string cars[]={"Ferrari","Lamborghini","Porsche","Bugatti","McLaren"};
    cars[2] = "BMW";
    // cout << cars[0] << endl;
    // cout << cars[1] << endl;
    // cout << cars[2] << endl;
    // cout << cars[3] << endl;
    // cout << cars[4] << endl;

    cout << sizeof(cars) << endl; // total size in bytes
    cout << sizeof(cars[0]) << endl; // size of one element in bytes

    int length = sizeof(cars)/sizeof(cars[0]);

    for(int i=0; i < length; i++){
        cout << cars[i] << endl;
    }
    return 0;
}