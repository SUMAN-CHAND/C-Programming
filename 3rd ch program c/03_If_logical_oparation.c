
#include <stdio.h>

int main()
{
    int age;
    int vippass = 0;
    // vippass=1;
    printf("enter your age\n");
    scanf("%d", &age);
    //if (age <=70 && age >= 18)
    if ((age <= 70 && age >= 18) || !vippass == 1)
    {
        printf("your are avobe 18 and below 70 you can drive");
    }
    else
    {
        printf("you can not drive");
    }

    return 0;
}
