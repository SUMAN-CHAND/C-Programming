#include<stdio.h>
#include <string.h>
// this is comper two char

int main(){
     char st1[45]="Hel" ;
    char *st2="Helo";
    int val=strcmp(st1,st2);
    printf("now val is %d ",val);
    return 0;
}