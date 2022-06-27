#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100  +1;//genarat a random number between 1 to 100
//printf("The number is %d\n",number);
//keep raning the loop until the  number guessed
do{
printf("Guess the number between 1 to 100\n");
scanf("%d",&guess);
if(guess>number){
    printf("lower number please\n");
}else if(guess<number){
     printf("higher number please\n");
}
else{
     printf("You guessed it in %d attempts\n",nguesses);
}
nguesses++;
}while(guess!=number);
getch();
    return 0;
}