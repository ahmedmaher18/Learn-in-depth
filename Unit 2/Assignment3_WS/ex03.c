#include "stdio.h"

int main()
{
    int matrix[50][50], rows_size, col_size;
    printf("Enter rows and columns of the matrix: ");
    scanf("%d %d", &rows_size, &col_size);
    printf("Enter the elements of matrix\n");
    for (int i = 0; i < rows_size; i++)
    {
        for (int j = 0; j < col_size; j++)
        {
            printf("enter a%d%d: ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }    
    printf("Entered matrix:");
    for (int i = 0; i < rows_size; i++)
    {
        printf("\n");
        for (int j = 0; j < col_size; j++)
        {
            printf("%d\t", matrix[i][j] );
        }
    }    
    printf("\nTranspose matrix:");
    for (int i = 0; i < col_size; i++)
    {
        printf("\n");
        for (int j = 0; j < rows_size; j++)
        {
            printf("%d\t", matrix[j][i] );
        }
    }        
}
