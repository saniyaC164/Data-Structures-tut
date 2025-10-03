#include <iostream>
#include <string>
// CHECK IF A STRING IS PALINDROME
bool checkPalindrome(std::string s)
{
    int i = 0, n = s.length() - 1;
    while (i < n)
    {
        if (s.at(i) != s.at(n))
        {
            i++;
            n--;
            return false;
        }
        else
        {
            return true;
        }
    }
    return true;
}
int main()
{
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    std::cout << checkPalindrome(input) << std::endl;
    return 0;
}