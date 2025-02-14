#include <stdio.h>
#include <math.h>
int main(void) 
{
    int total;
    char riddlechar;
    int riddlenum;
    int attempts = 0;
    int code1;
    int fragment2 = 0;
    for (code1 = 1; code1 <= 100; code1++)
    {
        if (code1 % 5 == 0)
        {
            code1++;
        }
        else
        {
            total = total + code1;
            code1++;
        }
    }
    printf("Mystic code fragment 1: %d \n" , total);
    printf("The riddle of the switch \n");
    do {
        printf("choose a number between 1 and 5 to hear a riddle \n");
        scanf("%d", &riddlenum);
        if (riddlenum == 1)
        {
            printf("I speak without a mouth and hear without ears, I have no body, but i come alive with the wind \n");
            printf("Enter your answer (a,b,c) \n");
            scanf("%c" , &riddlechar);
            if ((riddlechar = getchar() ) == 'a')
            {
                printf("correct! you've earned mystic code fragment 2. \n");
                break;
            }
            else
            {
                printf("incorrect! you have %d attempts left \n", 2-attempts);
            }
        }
        else if (riddlenum == 2)
        {
            printf("im light as a feather, yet the strongest man cant hold me \n");
            printf("Enter your answer (a,b,c) \n");
            scanf("%c", &riddlechar);
            if ((riddlechar = getchar() ) == 'b')
            {
                printf("correct! you've earned mystic code fragment 2. \n");
                break;
            }
            else
            {
                printf("Incorrect! you have %d attempts left \n", 2- attempts);
            }
        }
        else if (riddlenum == 3)
        {
            printf("I have keys but no locks. I have space but no room. You can enter, but you cant go outside. \n");
            printf("Enter your answer (a,b,c) \n");
            scanf("%c", &riddlechar);
            if ((riddlechar = getchar() ) == 'c')
            {
                printf("correct! you've earned mystic code fragment 2. \n");
                break;
            }
            else
            {
                printf("Incorrect! you have %d attempts left \n", 2- attempts);
            }
        }
        else if (riddlenum == 4)
        {
            printf("What can fill a room but take up no space? \n");
            printf("Enter your answer (a,b,c) \n");
            scanf("%c", &riddlechar);
            if ((riddlechar = getchar() ) == 'b')
            {
                printf("correct! you've earned mystic code fragment 2. \n");
                break;
            }
            else
            {
                printf("Incorrect! you have %d attempts left \n", 2- attempts);
            }
        }
        else if (riddlenum == 5)
        {
            printf("The more you take, the more you leave behind \n");
            printf("Enter your answer (a,b,c) \n");
            scanf("%c", &riddlechar);
            if ((riddlechar = getchar() ) == 'a')
            {
                printf("correct! you've earned mystic code fragment 2. \n");
                break;
            }
            else
            {
                printf("Incorrect! you have %d attempts left \n", 2- attempts);
            }
        }
        attempts++;
    } while (attempts < 3);
    if (attempts == 3)
    {
        printf("Mystical code fragement 2 is: %d \n", fragment2);
        printf("the final mystic code is %d \n", total + fragment2);
        printf("The kingdom of code is doomed! \n");
    }
    else
    {
        fragment2 = 42;
        int finaltotal = fragment2 + total;
        printf("Mystic code fragement 2: %d \n", finaltotal);
        printf("the kingdom of code is saved!");
    }
}
