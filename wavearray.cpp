#include<iostream>
#include <algorithm>
using namespace std;

void sortinginWave(int arr[], int n)
{
    sort(arr, arr + n);

    
    for (int i = 0; i < n - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }
}

int main()
{
    int arr[] = {70, 80, 49, 2, 1, 45, 30};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortinginWave(arr, n);
    for (int i=0; i<n; i++)
       cout << arr[i] << " ";
    return 0;
}

