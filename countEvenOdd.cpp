//program to count even and odd numbers in an array
#include <iostream>

void countEvenOdd(int arr[],int n){
    int even =0, odd =0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    std::cout << "Even: " << even << std::endl;
    std::cout << "Odd: " << odd << std::endl;
}

int main(){
    int array[] = {1,5,3,8,2,4};
    int size = sizeof(array) / sizeof(array[0]);
    countEvenOdd(array,size);
    return 0;
}