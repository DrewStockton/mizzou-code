#include <stdio.h>
int main(void)
{
    for (int i='A'; i<='J'; i++)
    {
        switch(i) //uses ASCII to print numbers one thorough ten
        {
            case 'A':
            {
                printf("one\n");
                break;
            }
            case 'B':
            {
                printf("two\n");
                break;
            }
            case 'C':
            {
                printf("three\n");
                break;
            }
            case 'D':
            {
                printf("four\n");
                break;
            }
            case 'E':
            {
                printf("five\n");
                break;
            }
            case 'F':
            {
                printf("six\n");
                break;
            }
            case 'G':
            {
                printf("seven\n");
                break;
            }
            case 'H':
            {
                printf("eight\n");
                break;
            }
            case 'I':
            {
                printf("nine\n");
                break;
            }
            case 'J':
            {
                printf("ten\n");
                break;
            }

        }
    }
}
