// hint:
//fib(n) =fib(n-1)+fib(n-2)
//fib(1)=0
//fib(2)=1
#include<stdio.h>
int fibonacci(int n);
int main(){int n =5;
    printf("the value is %d",fibonacci( n));
    return 0;
}int fibonacci(int n){
if (n==1&&n==2)
{
   return 0&&1;
}
else{
    return (n-1)+fibonacci(n-2);
}
}