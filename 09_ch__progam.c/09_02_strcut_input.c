#include<stdio.h>
struct employee
{   int code;
float salary;
char name[10];   
};
int main(){
    struct employee e1,e2,e3;
    printf("Enter the value e1 code:   ");
    scanf("%d",&e1.code);
   printf("Enter the value e1 salary:   ");
    scanf("%f",&e1.salary);
    printf("Enter the value e1 name:   ");
    scanf("%s",e1.name);/*   *******/ 
    printf("Enter the value e2 code:   ");
    scanf("%d",&e2.code);
   printf("Enter the value e2 salary:   ");
    scanf("%f",&e2.salary);
    printf("Enter the value e2 name:   ");
    scanf("%s",e2.name);
    printf("Enter the value e3 code:   ");
    scanf("%d",&e3.code);
   printf("Enter the value e3 salary:   ");
    scanf("%f",&e3.salary);
    printf("Enter the value e3 name:   ");
    scanf("%s",e3.name);
    
    return 0;
}