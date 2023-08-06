#include "stdio.h"

int main()
{
    char x = 0;
    printf("Enter an alphapet: ");
    scanf("%c",&x);
    if (x == 'a' || x == 'A' || x == 'e' || x == 'E' || x == 'i' || x == 'I' \
    || x == 'o' || x == 'O' || x == 'u' || x == 'U')
    printf("%c is a vowel",x);
    else
    printf("%c is a consonant",x);
}
