#include<stdio.h>

int main(){
    //99-122=a-z ,ASCII value
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);
    if (ch<=122 && ch>=97)
    {
      printf("it is lower case");
    }
    else{
        printf(" It is not lower case");
    }
    return 0;
}