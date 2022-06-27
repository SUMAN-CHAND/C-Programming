#include<stdio.h>
struct vactor
{
    int x;
    int y;
};

int main(){
    struct vactor v1,v2;
    v1.x=98;
    v1.y=33;
    printf("X dim is %d and Y dim is %d \n", v1.x,v1.y);
    v2.x=93;
    v2.y=43;
    printf("X dim is %d and Y dim is %d \n", v2.x,v2.y);
    return 0;
}