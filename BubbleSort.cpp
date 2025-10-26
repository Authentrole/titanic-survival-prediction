#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n){
    for (int i = 0; i < n; i++){
        for ( int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main()
{
    int arr[] = {99, 34, 69, 11, 7, 10, 53};
    int n = sizeof(arr)/sizeof(arr[0]);

    BubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}