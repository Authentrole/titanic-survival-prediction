#include <iostream>

using namespace std;

int main(){
    string cars[]={"Ferrari","Lamborghini","Porsche","Bugatti","McLaren","Koenigsegg"};

    for(string car : cars){
        cout << car << endl;
    }

    return 0;
}