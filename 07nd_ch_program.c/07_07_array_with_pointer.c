#include<stdio.h>

int main(){
    int mark[4];
    int *ptr;
    ptr =&mark[0];
    for (int  i = 0; i < 4; i++)
    {
        printf("Enter the value of marks for student %d: \n",i+1);
        scanf("%d",ptr);
        ptr++;
    } for (int  i = 0; i < 4; i++)
    {
        printf("The value of mark for student %d is %d \n",i+1,mark[i]);
       
    }
    
    return 0;
}