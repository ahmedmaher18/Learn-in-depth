#include "stdio.h"

int main()
{
    int arr[15], size;
    printf("Input the number of elements to store in the array (max 15): ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Element - %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("The elements of array in reverse order are : \n");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("Element - %d: %d\n", i+1, *(arr+i));
    }
}