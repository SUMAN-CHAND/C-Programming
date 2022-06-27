#include<stdio.h>

int main(){
    int a=9;
    int *i=&a;
    int**k=&i;
    printf("The value of a is %d",**k);
    return 0;
}