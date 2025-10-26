#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    int arr[] = {99, 34, 69, 11, 7, 10, 53};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr + n, greater<int>());
    cout << "Sorted Array" << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}