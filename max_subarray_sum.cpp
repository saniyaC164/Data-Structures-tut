/* This program finds the maximum subarray sum using Kadane's algorithm
Given an integer array nums, find the subarray with the largest sum, and return its sum.

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
Example 2:

Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.
Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
*/

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int ms = INT_MIN; // Maximum sum = ms
    int n = sizeof(arr) / sizeof(arr[0]);
    int current_sum = 0;
    for (int i = 0; i < n; i++)
    {
        current_sum += arr[i];
        ms = max(current_sum, ms);
        if (current_sum < 0)
        {
            current_sum = 0;
        }
    }
    cout << ms << endl;
    return 0;
}
