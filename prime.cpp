#include <iostream>
using namespace std;
#include <math.h>

void prime_or_not(int num)
{
    int i;
    for (i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            printf("The number is not prime");
        }
        else
        {
            printf("The number is prime");
        }
    }
}

int main()
{
    cout << "Enter a NUmber" << endl;
    int n;
    cin >> n;
    prime_or_not(n);
    return 0;
}