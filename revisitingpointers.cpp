#include <iostream>
using namespace std;
// new operator/keyword usage.
int main()
{
    int *p = new int(40);
    cout << "the value of at address p is " << *(p) << endl;

    // dynamically allocation of array using pointers :-
    int *arr = new int(4);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    cout << "the value at arr[0] is " << arr[0] << endl;
    cout << "the value at arr[1] is " << arr[1] << endl;
    cout << "the value at arr[2] is " << arr[2] << endl;
    cout << "the value at arr[3] is " << arr[3] << endl; 
 
    // usage of delete operator :- 
    int *arrr = new int(4);
    arrr[0] = 10;
    arrr[1] = 20;
    arrr[2] = 30;
    arrr[3] = 40; 
    delete[] arr;
    cout << "the value at arr[0] is " << arr[0] << endl;
    cout << "the value at arr[1] is " << arr[1] << endl;
    cout << "the value at arr[2] is " << arr[2] << endl;
    cout << "the value at arr[3] is " << arr[3] << endl; 

    return 0;
}