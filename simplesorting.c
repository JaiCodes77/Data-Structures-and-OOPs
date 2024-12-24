#include <stdio.h>

// Function to sort an array consisting of only 0s and 1s
void sortArray(int arr[], int n)
{
    int count[2] = {0}; // Initialize count array to store the count of 0s and 1s
    
    // Count the number of 0s and 1s in the array
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    
    int index = 0;
    
    // Place all the 0s first in the sorted array
    for (int i = 0; i < count[0]; i++) {
        arr[index++] = 0;
    }
    
    // Place all the 1s next in the sorted array 
    for (int i = 0; i < count[1]; i++) {
        arr[index++] = 1;
    }
}

int main()
{
    int arr[] = {1, 0, 1, 0, 1, 0, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    sortArray(arr, n);
    
    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}