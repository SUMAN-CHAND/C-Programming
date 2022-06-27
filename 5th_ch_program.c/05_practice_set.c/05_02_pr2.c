#include <stdio.h>
float change(float cel,float far);
int main()
{
    float cel, far;
    printf("Enter the value of celcius ");
    scanf("%f", &cel);
    change(cel,far);
    printf("The value of far is %f", change(cel,far));

    return 0;
}
float change(float cel,float far)
{
    far = (cel * 9 / 5) + 32;
    return far;
}