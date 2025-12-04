//program to reverse an array
#include <iostream>

void reverse(int arr[],int n){
    int i,start =0;
    int end = n-1;
    while(start < end){
        std::swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(i=0;i<n;i++){
        std::cout << arr[i];
    }
}

int main(){
    int array[] = {1,5,3,8,2,4};
    int size = sizeof(array) / sizeof(array[0]);
    reverse(array,size);
    return 0;
}