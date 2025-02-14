#include <stdio.h>
#include <math.h>
#define SIZE 50
int main(void)
{
    int even[50];
    int arraynumeven = 0;
    int arraynumodd = 0;
    int odd[50];
    int sumeven = 0;
    float evenavg;
    int sumodd = 0;
    float oddavg;
    //int result[SIZE];
    for (int e = 102; e<=200; e++) // setup even array
    {
        if (e%2==0)
        {
            even[e] = e;
            printf("even[%d]=%d \n", arraynumeven, even[e]);
            sumeven += even[e];
            arraynumeven++;
        }
    }
    printf("Sum: %d \n", sumeven);
    evenavg = sumeven / 50;
    printf("Average : %.2f \n", evenavg);
    for (int o = 201; o<=299; o++) // setup odd array
    {
        if (o%2!=0)
        {
            odd[o] = o;
            printf("odd[%d]=%d \n", arraynumodd, odd[o]);
            sumodd += odd[o];
            arraynumodd++;
        }
    }
    printf("Sum: %d \n", sumodd); // printing sum and averages
    oddavg = sumodd/ 50;
    printf("Average : %.2f \n", oddavg);
    //int y = 0;
    
    for (int x = 0; x<= SIZE; x++)
    {
        printf("even[%d] * odd[%d]= %d  \n", x, 50-x, even[x] * odd[50-x]);
    }

}
