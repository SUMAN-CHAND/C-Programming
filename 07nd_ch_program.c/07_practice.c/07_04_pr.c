#include<stdio.h>

int main(){
    int mul[10];
    int n;
    printf("Enter the number which you went to print the table \n");
    scanf("%d",&n);
    for (int i = 0; i < 10; i++)
    {
        mul[i]=n*(i+1);
    }
    for (int i = 0; i < mul[i]; i++)
    {
       printf("%dX%d =%d\n",n,i+1,mul[i]);
    }
    
    return 0;
}