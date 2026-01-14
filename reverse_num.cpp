// PROGRAM TO REVERSE A NUMBER
//  TIME COMPLEXITY: O(d) WHERE d IS THE NUMBER OF DIGITS

#include <iostream>

int reverse(int num)
{
    int digit, reversed = 0;
    while (num != 0)
    {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }
    return reversed;
}

int main()
{
    int num = 12345;
    std::cout << reverse(num);

    return 0;
}