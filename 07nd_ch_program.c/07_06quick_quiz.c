#include<stdio.h>

int main(){
    int a = 46;
    int b =45;
    int *ptr2 =&a;
    int *ptr1 =&b;
    int *ptr=&a;
      
      printf("The value of ptr is %u\n",ptr);
    ptr=ptr +7;
    printf("The value of ptr is %u\n",ptr);
    ptr=ptr-6;
    printf("The value of ptr is %u\n",ptr);
ptr1 = ptr-ptr1;
    printf("The value of ptr is %u\n",ptr1);
   if (ptr==ptr2)
   {
      printf("yes");
   }
   else{
       printf("no");
   }
    return 0;
}