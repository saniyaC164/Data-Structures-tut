#include <iostream>
using namespace std;
#include <math.h>
int prime_or_not(int num)
{
    int i;
    for (i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            // printf("The number is not prime");
            return 1;
        }
        else
        {
            // printf("The number is prime");
            return 0;
        }
    }
}

int main()
{
    int i;
    cout << "Enter a number: ";
    int num;
    cin >> num;
    cout << 2 << endl;
    cout << 3 << endl;

    for (i = 2; i < num; i++)
    {
        if (prime_or_not(i) == 0)
        {
            cout << i << endl;
        }
        else
        {
        }
    }
    return 0;
}