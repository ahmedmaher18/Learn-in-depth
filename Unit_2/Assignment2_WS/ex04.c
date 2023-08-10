#include "stdio.h"

int main()
{
    float x;
    printf("Please enter number: ");
    scanf("%f", &x);
    if (x == 0)
    {
        printf("you entered a 0");
    }
    else if (x > 0)
    {
        printf("%f is positive",x);
    }
    else
    {
        printf("%f is negative",x);
    }
}
