#include<stdio.h>
#include<string.h>
struct empployee
{   int code;
    float salary;
    char name[20];
};
int main(){
    struct empployee facebook[100];
    facebook[0].code=100;
    facebook[0].salary=100.23;
    strcpy(facebook[0].name,"suman");

    facebook[1].code=111;
    facebook[1].salary=133.23;
    strcpy(facebook[1].name,"Harry");

    facebook[2].code=103;
    facebook[2].salary=103.23;
    strcpy(facebook[2].name,"Rahul");
     
    printf("done");
    return 0;
}