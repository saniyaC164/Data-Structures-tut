#include <iostream>
#include <cmath>
bool checkPrime(int n)
{
    if (n == 0 || n == 1)
    {
        return false;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
            if (n % i == 0)
                return false;
    }
    return true;
}

int main()
{
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    // std::cout << checkPrime(n);
    (checkPrime(n)) ? std::cout << n << " is prime" : std::cout << n << " is not prime" << std::endl;
    return 0;
}