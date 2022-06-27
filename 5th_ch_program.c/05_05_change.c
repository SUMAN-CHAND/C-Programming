#include<stdio.h>
void change(int b);
int main(){
    int b=353;
    printf("the value of b before chang is %d\n",b);
change(b);
 printf("the value of b after chang is %d\n",b);
    return 0;
}
void change(int b){
     b=57;
}