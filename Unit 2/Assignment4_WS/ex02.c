#include "stdio.h"


void fun(int n)
{
    if (n > 0)
    {
        fun(--n);
        printf("%d ", n);
        fun(--n);
    }
}
int qw()
{
    int a = 40;
}
int main()
{
    int a = 3;
    a =  qw();
    printf("%d", a);
}
#define PI 3.14