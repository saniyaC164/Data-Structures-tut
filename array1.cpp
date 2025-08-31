#include <iostream>
using namespace std;

int sum(int arr1[])
{
    int i, sz = sizeof(arr1) / sizeof(arr1[0]);
    int sum1 = 0;
    for (i = 0; i < sz; i++)
    {
        sum1 += arr1[i];
    }
    return sum1;
}

int main()
{
    cout << "Hello World" << endl;
    int arr[] = {10, 29, 38, 45, 56, 63, 72, 86, 90};
    int i, n = sizeof(arr) / sizeof(arr[0]);
    // SUM AND PRODUCT OF ELEMENTS IN A ARRAY
    cout << sum(arr);

    return 0;
}