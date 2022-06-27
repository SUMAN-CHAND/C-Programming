#include<stdio.h>

int main(){
    int n;
    printf("Enter the number \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("The number is %d\n",i+1);
    }
    return 0;
}