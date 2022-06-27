#include<stdio.h>
// void wrong_swep (int *a , int *b);
void swep (int *a , int *b);
int main(){
    int a =3 ;
    int b = 4;
    printf("The value of a and  b  fanction is %d and %d \n ", a,b);
    // wrong_swep(&a,&b);// this is not work 
    swep(&a,&b);
    printf("The value of a and  b after  fanction is %d and %d \n ", a,b);
    return 0;
 }//void wrong_swep (int *a , int *b){
// int temp;
// temp=a ;
// a = b ;
// b =temp;
// }

void swep (int *a , int *b){
    int temp;
temp=*a ;
*a = *b ;
*b =temp;
}