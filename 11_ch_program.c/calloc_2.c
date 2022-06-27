#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("Emter the number of int \n");
    scanf("%d",&n);
 
    ptr = (int *)calloc(n , sizeof(int));
    for (int  i = 0; i < n; i++)
    {
        printf("Enter the number \n");
        scanf("%d",&ptr[i]);
    }
    for (int  i = 0; i < n; i++)
    {
         printf(" the number is %d \n", ptr[i]);
    }
    
    
    return 0;
}