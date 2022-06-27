#include<stdio.h>
#include<string.h>
struct emplloy
{   int code ;
    float salary;
    char name[20];
};
void show(struct emplloy emp){
    printf("The code of emplloy is  : %d\n",emp.code);
    printf("The salary of emplloy is  : %f\n",emp.salary);
    printf("The name of emplloy is  : %s\n",emp.name);
}
int main(){
struct emplloy e1;
struct emplloy *ptr;
ptr = &e1;
// (*ptr).code =101; or also use the next line
ptr->code= 100;
ptr->salary=1002.5;
strcpy(ptr->name,"Suman");
show(e1);
    return 0;
}