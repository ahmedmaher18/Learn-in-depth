#include "stdio.h"
#include "string.h"
int main()
{
    char srcStr[50], desStr[50];
    printf("Enter a string: ");
    gets(srcStr);
    char size = 0;
    while(srcStr[size] != '\0')
    {
        size++;
    }
    for (int i = 0, j = size - 1; i < size; i++, j--)
    {
        desStr[i] = srcStr[j];
    }
    desStr[size] = '\0';
    puts(desStr);
}