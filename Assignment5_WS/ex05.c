#include "stdio.h"

#define PI 3.14159
#define CIRCLE_AREA(r) ((double)(r) * (double)(r) * PI)

int main()
{
    int radius;
    printf("Enter the radius: ");
    scanf("%d", &radius);
    printf("Area = %.2lf", CIRCLE_AREA(radius));
}