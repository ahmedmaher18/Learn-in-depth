#include "stdio.h"

#define MATRIX_SIZE 2
int main()
{
    float a[MATRIX_SIZE][MATRIX_SIZE], b[MATRIX_SIZE][MATRIX_SIZE];
    printf("Enter the elements of 1st matrix\n");
    for (int i = 0; i < MATRIX_SIZE; i++)
    {
        for (int j = 0; j < MATRIX_SIZE; j++)
        {
            printf("enter a%d%d: ",i+1,j+1);
            scanf("%f",&a[i][j]);
        }
    }    
    printf("Enter the elements of 2nd matrix\n");
    for (int i = 0; i < MATRIX_SIZE; i++)
    {
        for (int j = 0; j < MATRIX_SIZE; j++)
        {
            printf("enter b%d%d: ",i+1,j+1);
            scanf("%f",&b[i][j]);
        }
    }
    printf("Sum of matrix:");
    for (int i = 0; i < MATRIX_SIZE; i++)
    {
        printf("\n");
        for (int j = 0; j < MATRIX_SIZE; j++)
        {
            printf("%.1f\t", a[i][j] + b[i][j]);
        }
    }        
}
