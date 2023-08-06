#include "stdio.h"
#include "string.h"
int main()
{
    char var[100], searchChar;
    printf("Enter a string: ");
    gets(var);
    char i = 0;
    while(var[i] != '\0')
    {
        i++;
    }
    printf("Length of string: %d", i);
}