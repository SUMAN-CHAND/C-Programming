#include<stdio.h>
int multfun(int i){
       int*j=&i;
    printf("The value of 10 X i is%d\n", 10* *j );
}
int main(){
    int a=4;
    multfun(a);
    return 0;
}