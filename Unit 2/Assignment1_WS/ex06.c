#include "stdio.h"

int main()
{
    float a, b, temp;
    printf("Enter numbers to be swapped: ");
    scanf("%f %f", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping, a = %f\n",a);
    printf("After swapping, b = %f\n",b);

}
