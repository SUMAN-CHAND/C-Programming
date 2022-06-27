#include<stdio.h>
void printarray(int *ptr,int n){for (int i = 0; i < n; i++)
{
   printf("the value of element %d is %d\n",i+1,*(ptr+i));
}
}
    

int main(){
    int arr[]={2,34,544,45,745,445, 454};
    printarray(arr,7);
    return 0;
}