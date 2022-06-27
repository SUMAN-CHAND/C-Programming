/*program to find sum and product*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,sum,product;
  
    printf("\n Enter value to a:");
    scanf("%d",&a);
    printf("\n Enter the value to b :");
    scanf("%d",&b);
    sum=a+b;
    product=a*b;
    printf("\n SUM=%d",sum);
    printf("\n PRODUCT=%d",product);
    getch();
    
}