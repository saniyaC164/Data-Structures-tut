#include <iostream>
using namespace std;

int digit(int n)
{
    int sum = 0;
    if (n == 0)
    {
        return sum;
    }
    else
    {
        digit(n / 10);
        int r = n % 10;
        sum += r;
        // digit(n / 10);
        return sum;
    }
}
int main()
{
    // Program to print sum of digits of a number
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    // digit(num);
    cout << "Sum of digits entered is " << digit(num);
    return 0;
}
