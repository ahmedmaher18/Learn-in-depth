#include "stdio.h"
#include "string.h"

#define FALSE 0
#define TRUE 1
typedef struct
{
    int x;
    /* data */
}ST_t;
enum CON{
    SUN,
    MON
};
void findPrime(int rangeMin, int rangeMax);
int main()
{
    ST_t h = {4};
    int x = MON, y;
    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &x, &y);
    findPrime(x, y);
}
void findPrime(int rangeMin, int rangeMax)
{
    printf("Prime numbers between %d and %d are: ", rangeMin, rangeMax);
    char isPrime = TRUE;
    for (int sample = rangeMin; sample <= rangeMax; sample++)
    {
        isPrime = TRUE;
        for(int i = 2; i < sample / 2; i++)
        {
            if (sample % i == 0)
            {
                isPrime = FALSE;
            }
        }
        if (isPrime)
        printf("%d ", sample);
    }
}
xray (int x, int y)
{
    return 3;
}