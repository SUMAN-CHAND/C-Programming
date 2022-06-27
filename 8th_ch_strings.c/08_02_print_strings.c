#include<stdio.h>

int main(){
    char str[]={'s','u','m','a','n','\0'};
    // char str[]="suman";
    char  *ptr =str;
    while (*ptr!='\0')
    {
       printf("%c", *ptr);
       ptr++;
    }
    
    
    return 0;
}