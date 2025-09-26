// find second smallest number from array
#include <iostream>
#include <climits>
int second_smallest(int arr[], int n)
{
    int second = INT_MAX, smallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            second = smallest;
            smallest = arr[i];
        }
        else if (arr[i] > smallest && arr[i] < second)
        {
            second = arr[i];
        }
    }
    return (second == INT_MAX) ? -1 : second;
}

int main()
{
    int arr[] = {5, 2, 3, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << second_smallest(arr, n) << std::endl;

    return 0;
}