/* Fibonacci sequence is a series of numbers where each number is the sum of the two preceding ones, usually starting with 0 and 1. 

*/

#include <iostream>
#include <cmath>

int main() {
    int i,n;
    std::cout << "enter a number for sequnece: ";
    std:: cin >> n;
    std::cout << "[ ";
    int first=0, second=1, next;
    for(i=0;i<n;i++){
        std::cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
    std::cout << "]";
    
    return 0;
}