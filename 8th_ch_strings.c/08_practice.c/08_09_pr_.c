#include<stdio.h>
void count(char c[]){
    char *ptr =c;
    
    while (*ptr!='\0')
    {
        if (*ptr=='a')
    {
        printf ("THe char is present there\n");
       
    } *ptr++;
    
    // printf("the number is %d\n",num);

    }
}
int main(){
    char c[]="Harry is vary good teacher";
    count(c);
 
    return 0;
}