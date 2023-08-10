#include "stdio.h"
int main()
{
    int arr[100], size, newElement, newIndex;
    printf("Enter no of elements:");
    scanf("%d", &size);
    for (int i = 1; i <= size; i++)
    {
        arr[i] = i;
        printf("%d ",i);
    }
    printf("\nenter the element to be inserted:");
    scanf("%d", &newElement);
    printf("Enter the location: ");
    scanf("%d", &newIndex);
    for (int i = size; i >= newIndex; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[newIndex] = newElement;
    size++;
     for (int i = 1; i <= size; i++)
    {
        printf("%d ",arr[i]);
    }

}