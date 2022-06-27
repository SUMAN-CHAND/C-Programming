
// ***miltiplication table of  any natural number *****

#include<stdio.h>

int main(){
    int n,i;
    printf("****Maltiplication Tabel of N is\n\n");
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf(" %d X %d=%d\n",n,i,n*i);

    }
    return 0;
}
