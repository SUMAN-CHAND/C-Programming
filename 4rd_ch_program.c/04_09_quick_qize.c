#include<stdio.h>

int main(){
    int n;
    printf("enter the value of n %d\n");
    scanf("%d",&n);
    for(int i=n;i;i--){
        printf("first n natural in decriching order is%d\n",i);
    }
    return 0;
}