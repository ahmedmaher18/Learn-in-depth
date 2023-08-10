#include "stdio.h"

void reverseString()
{
    char temp;
    scanf("%c", &temp);
    if (temp != '\n')
    {
        reverseString();
        printf("%c",temp);
    }
}
int main()
{
    printf("Please enter the string: ");
    reverseString();
}