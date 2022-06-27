#include<stdio.h>
#include<string.h>
struct empployee
{   int code;
    float salary;
    char name[20];
};
int main(){
    struct empployee Suman ={ 100,100.2, "Suman"};
    printf("code is :    %d \n", Suman.code);
    printf("salary is :  %f \n", Suman.salary);
    printf("name is :    %s\n", Suman.name); 
    return 0;
}