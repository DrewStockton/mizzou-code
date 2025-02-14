#include <stdio.h>

int main()
{
    for (int i=0; i<=300; i+= 3)    //for loop that icrements by 3
    {
        if (i % 7 == 0 && i % 5 == 0)
        {
            printf("TrumanTiger%d ", i);
        }
        else if (i % 7 == 0)    // if its divisible by 7
        {
            printf("Truman%d ",i);
        }
        else if (i % 5 == 0) // if its divisible by 5
        {
            printf("Tiger%d ",i);
        }
        else //prints number if not divisible by 5 or 7 or both
        {
            printf("%d ",i);
        }
    }
}
