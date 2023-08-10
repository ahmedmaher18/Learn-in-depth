#include "stdio.h"

int main()
{
    float x, y, z;
    printf("Enter three numbers: ");
    scanf("%f %f %f",&x,&y,&z);
    if (x > y && x > z)
    printf("Largest numebr = %f",x);
    else if(y > x && y > z)
    printf("Largest numebr = %f",y);
    else
    printf("Largest numebr = %f",z);

}
