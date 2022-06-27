#include<stdio.h>
#include<string.h>
typedef struct emplloy
{   int code ;
    float salary;
    char name[20];
}emp;
void show(emp emp1){
    printf("The code of emplloy is  : %d\n",emp1.code);
    printf("The salary of emplloy is  : %f\n",emp1.salary);
    printf("The name of emplloy is  : %s\n",emp1.name);
}


int main(){
    // declaring e1 and ptr
emp e1;
emp *ptr;
ptr = &e1;
ptr->code=101;
ptr->salary =11.98;
strcpy(ptr->name,"Suman");
show(e1);
    return 0;
}