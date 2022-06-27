#include<stdio.h>

int main(){
    int arr[10];
    int *ptr = &arr[0];
    // int *ptr =arr;
    ptr =ptr+2;
    if(ptr == &arr[2]){
        printf("The ptr is point to  same mamory ");
    }
    else{
        printf("The ptr is not point to same mamory ");
    }
    return 0;
} 