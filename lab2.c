#include <stdio.h>

int main(void)
{
    int int1,int2,int3;
    printf("Please enter an integer:\n");
    scanf("%d",&int1);
    printf("please input another integer:\n");
    scanf("%d",&int2);
    printf("please input another integer:\n");
    scanf("%d",&int3);

    printf("your first integer was %d, your second was %d, and your third was %d\n",int1,int2,int3);

    printf("First times second = %d\n", int1 * int2);
    printf("second divided by third = %d\n", int2 / int3);
    printf("crazy equation = %d\n", (int2-1) * int3 + int1);

    printf("your first integer was %d, your second was %d, and your third was %d\n",int1,int2,int3);
}
