#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
 
    ptr = (int *)calloc(6 , sizeof(int));
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