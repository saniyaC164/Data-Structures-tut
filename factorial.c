#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        int i;
        for (i = 1; i <= n; i++)
        {
            int fact = i * (i + 1);
            i = i + 1;
            return fact;
        }
    }
}

int main()
{
    int result = factorial(5);
    printf(result);
    return 0;
}
