//1480. Running Sum of 1d Array
//Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]). 
//Return the running sum of nums.


#include <iostream>
using namespace std;

int main() {
    int nums[] = {1, 2, 3, 4};
    int s = sizeof(nums) / sizeof(nums[0]);
    int runningSum[s]; // Create a new array to store the running sum

    runningSum[0] = nums[0]; // Initialize the first element of the running sum array

    for (int i = 1; i < s; i++) {
        runningSum[i] = runningSum[i - 1] + nums[i];
    }

    // Print the running sum array
    for (int i = 0; i < s; i++) {
        cout << runningSum[i] << " ";
    }
    cout << endl;

    return 0;
}