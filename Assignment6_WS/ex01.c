#include"stdio.h"

int main()
{
    int m = 29;
    printf("Adress of m : 0x%p\n", &m);
    printf("value of m = %d\n\n", m);
    int * ab = &m;
    printf("Adress of pointer ab = 0x%p\n", ab);
    printf("Content of pointer ab = %d\n\n", *ab);
    m = 34;
    printf("Adress of pointer ab = 0x%p\n", ab);
    printf("Content of pointer ab = %d\n\n", *ab);
    *ab = 7;
    printf("Adress of m : 0x%p\n", &m);
    printf("value of m = %d\n\n", m);
}