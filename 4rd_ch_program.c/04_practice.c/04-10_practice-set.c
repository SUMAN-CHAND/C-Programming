//prime number=which is divisable by 1 or by itself 
//this is not the best mathod  ------   it is ds alo question
#include<stdio.h>

int main(){
    int i=2, n, prime=1;
    printf("Enter the value of n\n");
    scanf ("%d",&n);
    for ( i = 2; i <n; i++)
    {if(n%i==0){
        prime=0;
        break;
    }

    }if(prime==0){
        printf("this is not a prime number");
    }else{
        printf("This is a prime number");
    }
    
    return 0;
}