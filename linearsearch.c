#include <stdio.h>

int LinearSearch(int arr[], int size, int element)
{
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 4, 5, 634, 53, 67, 3, 5, 75, 63};
    int size = sizeof(arr) / sizeof(int);
    int element = 75;
    int searchindex = LinearSearch(arr, size, element);
    printf("the element %d was found at index %d \n", element, searchindex);
    return 0;
}