#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int nums[6] = {1, 2, 3, 4, 5, 6};
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i = 0; i < 6; i++)
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];
        }
        if (nums[i] > largest)
        {
            largest = nums[i];
        }
    }
    cout << "Smallest:%d, Index: %d" << smallest << smallest[i + 1] << endl;
    cout << "Largest: " << largest << endl;
}