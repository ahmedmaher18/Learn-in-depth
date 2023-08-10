#include "stdio.h"

int main()
{
    char x;
    printf("Please enter a character: ");
    scanf("%c",&x);
    if (x >= 'A' && x <= 'z')
    {
        printf("%c is an alphapet",x);
    }
    else
    {
        printf("%c is not an alphapet",x);
    }
}
