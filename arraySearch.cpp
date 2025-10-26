#include <iostream>

using namespace std;

// int main(){
//     string cars[]={"Ferrari","Lamborghini","Porsche","Bugatti","McLaren"};

//     string search;
//     cout<<"Enter the car you want to search: ";
//     cin>>search;

//     bool found=false;
//     for (string car : cars)
//     {
//         if (car==search){
//             found=true;
//             break;
//         }
//     }
//     if (found){
//         cout<<search<<" is found in the array."<<endl;
//     } else {
//         cout<<search<<" is not found in the array."<<endl;
//     }
//     return 0;
// }

//bool searchArray(string cars[], int length, string search);
int searchArray(string cars[], int length, string search);

int main(){
    string cars[]={"Ferrari","Lamborghini","Porsche","Bugatti","McLaren"};
    cout<<"Enter the car you want to search: ";
    string search;
    cin>>search;
    int length=sizeof(cars)/sizeof(cars[0]);
    int index=searchArray(cars, length, search);

    if (index != -1) {
        cout<<search<<" is found in the array at index "<< index <<"." <<endl;
    } else {
        cout<<search<<" is not found in the array."<<endl;
    }
}

// bool searchArray(string cars[], int length, string search) {
//     for (int i = 0; i < length; ++i) {
//         if (cars[i] == search) {
//             return true;
//         }
//     }
//     return false;
// }

int searchArray(string cars[], int length, string search) {
    for (int i = 0; i < length; ++i) {
        if (cars[i] == search) {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}