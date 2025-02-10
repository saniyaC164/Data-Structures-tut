#include <iostream>
using namespace std;

int decimaltoBin(int decNum)
{
    int ans = 0, pow = 1;

    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum = decNum / 2;
        ans = ans + (rem * pow);
        pow = pow * 10;
    }
    return ans;
}

int main()
{
    int decNum = 50;
    printf("Binary: %d", decimaltoBin(decNum));

    return 0;
}