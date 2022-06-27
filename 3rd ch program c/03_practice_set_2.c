#include <stdio.h>

int main()
{
    int phy, cha, math;
float total;
    printf("Enter phy mark\n");
    scanf("%d", &phy);
    printf("Enter  cha mark\n");
    scanf("%d", &cha);
    printf("Enter math mark\n");
    scanf("%d", &math);
    total=(phy + cha  + math)/3;
if((total<40)|| phy<33 || cha<33  || math<33){
    printf("your total  parsentage is %f and you are failed \n", total);
}
else{
     printf("your total  parsentage is %f and you are pass\n", total);
}

    return 0;
}