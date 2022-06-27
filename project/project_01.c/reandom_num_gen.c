#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number;
    srand(time(0));
    number=rand()%100  +1;//genarat a random number between 1 to 100
printf("The number is %d",number);
//keep raning the loop until the  number guessed
    return 0;
}