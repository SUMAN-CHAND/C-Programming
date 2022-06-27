//sum of first n naturl number
#include <stdio.h>

int main()
{
    int n, i = 0, sum = 0;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    while (i <= n)
    {
        sum += i;
        i++;
    }
     printf("The sum of first n naturl number is %d\n", sum);

    return 0;
}