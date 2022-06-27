#include<stdio.h>
float avg (int a,int b ,int c);
int main(){int a,b,c;
printf("enter the value of a\n ");
scanf("%d",&a);
printf("enter the value of b\n ");
scanf("%d",&b);
printf("enter the value of c\n ");
scanf("%d",&c);
avg(a,b,c);
    printf("thre avrage is %f",avg(a,b,c));
    return 0;
}
float avg (int a,int b ,int c){
    float result;
    result =(float)(a+b+c)/3;
    return result;
}