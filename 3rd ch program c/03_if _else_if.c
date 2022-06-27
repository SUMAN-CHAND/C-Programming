#include <stdio.h>

int main()
{
    int num;
    printf("enter your number \n");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("your nember is 1 \n");
    }
    else if (num == 2)
    {
        printf("your number is 2\n");
    }
    else if (num == 4)
    {
        printf("your number is 4\n");
    }
    else
    {
        printf("it is not 1,2or4\n");
    }
    return 0;
}