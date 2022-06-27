#include<stdio.h>
void decrypt(char *c){
   char *ptr=c;
    while (*ptr!='\0')
    {
      *ptr=*ptr-1;
      *ptr++;
    }
    
}
int main(){
    char c[]="dpnf!up!uiijt!sppn";
    decrypt(c);
    printf("The encrypt value is %s",c);
    return 0;
}