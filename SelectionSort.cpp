#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n){
    for (int i = 0; i < n; i++){
        int minIndex=i;
        for (int j = i + 1; j < n; j++){
            if(arr[j] < arr [minIndex]){
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}
int main()
{
    int arr[] = {4,6,9,1,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}