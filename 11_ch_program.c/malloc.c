#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    // sizeof operator in c
    // printf("The size of int on my pc %d\n",sizeof(int));
    // printf("The size of float on my pc%d\n",sizeof(float));
    // printf("The size of char on my pc%d\n",sizeof(char));
    ptr = (int *)malloc(6 * sizeof(int));
    for (int  i = 0; i < 6; i++)
    {
        printf("Enter the number \n");
        scanf("%d",&ptr[i]);
    }
    for (int  i = 0; i < 6; i++)
    {
         printf(" the number is %d \n", ptr[i]);
    }
    
    
    return 0;
}