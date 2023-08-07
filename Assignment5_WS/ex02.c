#include "stdio.h"

typedef struct 
{
    /* data */
    int feet;
    float inch;
}Distance_t;

int main()
{
    Distance_t Distance[2];
    printf("Enter information for 1st distance\n");
    printf("Enter feet: ");
    scanf("%d", &Distance[0].feet);
    printf("Enter inch: ");
    scanf("%f", &Distance[0].inch);
    printf("Enter information for 2nd distance\n");
    printf("Enter feet: ");
    scanf("%d", &Distance[1].feet);
    printf("Enter inch: ");
    scanf("%f", &Distance[1].inch);
    int feetSum = 0;
    float inchSum = 0;
    feetSum = Distance[0].feet + Distance[1].feet;
    inchSum = Distance[0].inch + Distance[1].inch;
    while(inchSum >= 12)
    {
        inchSum -= 12;
        feetSum++;
    }
    printf("Sum of distances = %d' %.2f\"", feetSum, inchSum);
}