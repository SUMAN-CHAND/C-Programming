#include<stdio.h>
int strlen(char *ch ){
    char *ptr=ch;
    int len =0;
    while (*ptr!='\0')
    {
        len++;
        ptr++;
    }
    return len;   
}
int main(){
    char st[]="Suman";
   int l= strlen(st);
   printf("The lenth is %d\n",l);
    return 0;
}