#include"stdio.h"

int main()
{
    char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *ptr = alph;
    while(*ptr != '\0')
    {
        printf("%c ", *ptr);
        ptr++;
    }
}