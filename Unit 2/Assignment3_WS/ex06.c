#include "stdio.h"
#include "string.h"
int main()
{
    char var[100], searchChar;
    printf("Enter a string: ");
    gets(var);
    printf("Enter a character to find frequency: ");
    scanf("%c", &searchChar);
    char i = 0, charFreq = 0;;
    while(var[i] != '\0')
    {
        if (var[i] == searchChar)
        {
            charFreq++;
        }
        i++;
    }
    printf("Frequency of %c = %d", searchChar, charFreq);
}