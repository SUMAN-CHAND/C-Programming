#include<stdio.h>
void countint(int *arr,int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
      if (arr[i]>0)
    {
        count++;
    } 
    }
    printf("count =%d",count);
}
int main(){
    int arr[]={1,2,3,-5,-6,6,5,4,-3,-9,8,7,-9,-4,-5,1,2,3,4,5,6,7,8,9};
     countint(arr,24);
   

    return 0;
}