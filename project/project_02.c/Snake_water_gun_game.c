#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int snakegunwater(char you, char comp)
{
    // here we match the think
    // here 0= draw, -1=loss, 1= win
    // ss , gg, ww
    if (you == comp)
    {
        return 0;
    }
    // sw
    // sg
    // wg
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }
    if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }
    if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return -1;
    }
}
int main()
{
    char you, comp;
    char i;
    printf("Enter 's'for snake,'w' for water & 'g' for gun  :  ");
        scanf("%c", &you);
    do
    {
        
        // genaret the rendom choos for computer
        int number;
        srand(time(0));
        number = rand() % 100 + 1;
        if (number < 33)
        {
            comp = 's';
        }
        else if (number < 66)
        {
            comp = 'w';
        }
        else
        {
            comp = 'g';
        }
        int result = snakegunwater(you, comp);
        printf("In the game you choos %c and your opponent choos %c\n", you, comp);
        if (result == 0)
        {
            printf("game draw!\n");
        }
        else if (result == 1)
        {
            printf("you win!\n ");
        }
        else
        {
            printf("you loss!\n");
        }
        
        fflush(stdin);
        printf("Do you want to continue. press y or press n  :");
        scanf("%c",&i);
    } while (i=='y'||i=='Y');
    
    return 0;
}