#include <stdio.h>
#include <math.h>

int main(void)
{
    int even[50];
    int odd[50];
    for (int e = 102; e<=200; e++)
    {
        if (e%2==0)
        {
            even[e] = e + 1;
            printf("%d ", even[e])
        }
    }
}
