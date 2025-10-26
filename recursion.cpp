#include <iostream>

using namespace std;

void walk(int steps);
int main() {
    walk(100);
    return 0;
}

// void walk(int steps){
//     for(int i=0; i < steps; i++){
//         cout << "You take a step!" << endl;
//     }
// }

void walk(int steps){
    if(steps > 0){
        cout << "You take a step!" << endl;
        walk(steps-1);
    }
}