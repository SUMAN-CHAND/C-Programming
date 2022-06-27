#include<stdio.h>
#include<string.h>
struct employee
{   int code;
float salary;
char name[10];   
};

int main(){
    int a=99;
    float b=23252.255;
    char c ='a';
    // employee e1;
    // e1.salary =232.232;    > it does not work
    struct employee e1;
    e1.code=199;
    e1.salary=25205.25;
    // e1.name="Harry";
    strcpy(e1.name,"Harry");
    printf("The code is %d\n",e1.code);
    printf("The salary is %0.2f\n",e1.salary);
    printf("The name is %s\n",e1.name);
    return 0;
}