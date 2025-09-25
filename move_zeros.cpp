// Move zeros to the end
#include <iostream>
using namespace std;

void moveZeros(int arr[], int size)
{
    int pos = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            arr[pos] = arr[i];
            pos++;
        }
    }
    while (pos < size)
    {
        arr[pos] = 0;
        pos++;
    }
}

int main()
{
    int arr[] = {0, 1, 3, 0, 12};
    int i, n = sizeof(arr) / sizeof(arr[0]);
    moveZeros(arr, n);
    for (i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}