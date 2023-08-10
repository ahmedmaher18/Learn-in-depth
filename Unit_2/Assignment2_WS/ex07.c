#include "stdio.h"

int main()
{
    int x;
    long fact = 1;
    printf("Please enter an integer: ");
    scanf("%d",&x);
    if (x < 0)
    {
        printf("Error!!! factorial of negative numebr doesn't exist");
        return 0;
    }
    else
    {
        for (int i = 1; i <= x; i++)
        {
            fact *= i;
        }
        printf("Factorial = %d", fact);
    }
}
