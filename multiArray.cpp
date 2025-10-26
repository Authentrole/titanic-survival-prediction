#include <iostream>

using namespace std;

int main() {

    string cars [][3] ={{"Aventador", "Revuelto", "Huracen"},
                        {"Tourbillon", "Chiron", "Bolide"},
                        {"Laferrari", "Daytona", "SF90 Stradale"}};
    // cout << cars[0][0] << " ";
    // cout << cars[0][1] << " ";
    // cout << cars[0][2] << endl;
    // cout << cars[1][0] << " ";
    // cout << cars[1][1] << " ";
    // cout << cars[1][2] << endl;
    // cout << cars[2][0] << " ";
    // cout << cars[2][1] << " ";
    // cout << cars[2][2] << endl;

    int rows = sizeof(cars) / sizeof(cars[0]);
    int cols = sizeof(cars[0]) / sizeof(cars[0][0]);
    
    // for (i : rows) {
    //     for (j : cols) {
    //         cout << cars[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << cars[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}