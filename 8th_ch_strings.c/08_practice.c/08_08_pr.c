#include<stdio.h>
int count(char c[]){
    char *ptr =c;
    int num =0;
    while (*ptr!='\0')
    {
        if (*ptr=='a')
    {
        num++;
       
    } *ptr++;
    // printf("the number is %d\n",num);
} return num;
    }
     
int main(){
    char c[]="Harry is vary good teacher";
    int num = count(c);
    printf("THe number of a is used for %d times\n",num);
    return 0;
}