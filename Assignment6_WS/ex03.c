#include "stdio.h"
#include "string.h"

int main()
{
    char str[100];
    printf("Input a string: ");    
    scanf("%s", str);
    int len = strlen(str);
    printf("Reverse of the string is : ");
    for(int i = len-1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}   