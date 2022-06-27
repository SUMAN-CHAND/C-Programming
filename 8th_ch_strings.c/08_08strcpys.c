#include<stdio.h>
#include <string.h>

int main(){
    char *st1="suman" ;
    char st2[50];
    strcpy(st2,st1);
    printf("now st2 is %s ",st2);
    return 0;
}