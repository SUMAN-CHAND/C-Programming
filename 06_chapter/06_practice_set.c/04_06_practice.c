#include<stdio.h>
void addAndavg(int a, int b, int *sum , float *avg){
*sum =a+b;
*avg =  (float)(*sum)/2;
}
int main(){
   int i=3,j=4;
   int sum;
   float avg;
   addAndavg(i ,j ,&sum ,&avg);
   printf("The sum is %d \n",sum);
   printf("The avg is %f \n",avg); 
    return 0;
} 