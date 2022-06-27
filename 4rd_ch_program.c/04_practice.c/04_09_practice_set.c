#include<stdio.h>

int main(){
    int i=1 ,n ,fact=1;
printf("Enter the value of n \n");
scanf ("%d",&n);
   while (i<=n)
   {
      fact=i*fact;
      i++;
   }
   printf("Factorial of %d is %d",n,fact);
   getch();
    return 0;
}