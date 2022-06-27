#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c, d, big;
    printf("\nEnter the value of a: ");
    scanf("%d", &a);
    printf("\nEnter the value of b: ");
    scanf("%d", &b);
    printf("\nEnter the value of c: ");
    scanf("%d", &c);
    printf("\nEnter the value of d: ");
    scanf("%d", &d);
    big = a;
    if (b > big)
        big = b;
    if (c > big)
        big = c;
    if (d > big)
        big = d;
    printf("biggest number= %d\n", big);
    getch();

    return 0;
}