// REVERSE AN ARRAY USING TWO POINTER TECHNIQUE
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {6, 2, 8, 1, 5, 7, 3};
    int size = sizeof(arr) / sizeof(int);
    int i, start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for (i = 0, i < size, i++)
    {
        cout << arr[i];
    }
}