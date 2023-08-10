#include "stdio.h"

int main()
{
    int x, sum = 0;
    printf("Please enter an integer: ");
    scanf("%d",&x);
    for (int i = 1; i <= x; i++)
    {
        sum += i;
    }
    printf("sum = %d", sum);
}
