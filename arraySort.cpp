#include <iostream>

using namespace std;

void sortArray(int arr[], int length);  

int main() {
    int arr[] = {10, 7, 99, 65, 34, 51, 100, 23};
    int length = sizeof(arr)/sizeof(arr[0]);
    sortArray(arr, length);

    cout << "Sorted array: ";
    for (int i = 0; i < length; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}

void sortArray(int arr[], int length) {
    for (int i = 0; i < length - 1; ++i) {
        for (int j = 0; j < length - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
