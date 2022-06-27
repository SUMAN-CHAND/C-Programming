#include<stdio.h>
#include<string.h>
struct emplloy
{   int code ;
    float salary;
    char name;
};
int main(){
struct emplloy e1;
struct emplloy *ptr;
ptr = &e1;
// (*ptr).code =101; or also use the next line
ptr->code =101;
printf("%d",e1.code);
    return 0;
}