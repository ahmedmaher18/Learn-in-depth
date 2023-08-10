#include "stdio.h"
int main()
{
    int size = 0;
    float sum = 0;
    printf("Enter the number of data: ");
    scanf("%d",&size);
    float arr[100];
    for (int i = 0; i < size; i++)
    {
        printf("Enter number: ");
        scanf("%f",&arr[i]);
        sum += arr[i];
    }
    printf("Average =  %.2f", sum / size);

}