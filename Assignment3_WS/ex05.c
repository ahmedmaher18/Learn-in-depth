#include "stdio.h"
#define FALSE 0
#define TRUE 1
int main()
{
    int arr[100], size, newElement;
    char isFound = FALSE;
    printf("Enter no of elements:");
    scanf("%d", &size);
    for (int i = 1; i <= size; i++)
    {
        arr[i] = i * 11;
        printf("%d ",arr[i]);
    }
    printf("\nenter the element to be searched:");
    scanf("%d", &newElement);
     for (int i = 1; i <= size; i++)
    {
        if (arr[i] == newElement)
        {
            printf("Numebr fount at the location = %d ", i);
            isFound = TRUE;
        }
    }
    if (isFound == FALSE)
    printf("Number not found");

}