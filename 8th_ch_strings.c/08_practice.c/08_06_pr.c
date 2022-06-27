#include<stdio.h>
void encrypt(char *c){
   char *ptr=c;
    while (*ptr!='\0')
    {
      *ptr=*ptr+1;
      *ptr++;
    }
    
}
int main(){
    char c[]="come to thhis room";
    encrypt(c);
    printf("The encrypt value is %s",c);
    return 0;
}