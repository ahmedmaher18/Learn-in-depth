#include "stdio.h"

int power(int base, int exp)
{
    if (exp == 0)
    return 1;
    else
    return base * power(base, --exp);
}
int main()
{
    int base, exp;
    printf("Enter Base number then power: ");
    scanf("%d %d", &base, &exp);
    printf("Result = %d", power(base, exp));
}