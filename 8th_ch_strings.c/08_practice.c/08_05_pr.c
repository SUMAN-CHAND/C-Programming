#include<stdio.h>
// #include <string.h>
void Strcpy(char *st1,char *st2){
    int i=0;
    // char temp[20] = {'\0'};
    while (st1[i]!='\0')
    {
        st1[i]=st2[i];
        i++;
    }
    for (i = 0; i <20 ; i++)
    {
        st1[i] = '\0';
    }
}
int main(){
    char st[20]="suman" ;
    char st2[20]="chand";
    printf("The first string is %s\n",st);
    printf("The first string is %s\n",st2);
    Strcpy(st,st2);
     printf("The source data now is '%s' \n");
        printf("The destination data now is '%s' \n");
    return 0;
}