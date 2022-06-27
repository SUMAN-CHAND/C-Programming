#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int *ptr2;
    ptr = (int *)malloc(6 * sizeof(int));
    for (int  i = 0; i < 6; i++)
    {
        ptr2 = (int *)malloc(6* sizeof(int));
        printf("Enter the number \n");
        scanf("%d",&ptr[i]);
        free(ptr2);
    }
    for (int  i = 0; i < 6; i++)
    {
         printf(" the number is %d \n", ptr[i]);
    }
    
    
    return 0;
}