#include "stdio.h"

typedef struct 
{
    /* data */
    float real;
    float imag;
}complex_t;

void addComplex(complex_t * op1, complex_t* op2)
{
    float realSum, imagSum;
    realSum = op1->real + op2->real;
    imagSum = op1->imag + op2->imag;
    printf("Sum = %.1f+%.1fi", realSum, imagSum);
}
int main()
{
    complex_t Operands[2];
    printf("For 1st complex number\n");
    printf("Enter real and imaginary respectively: ");
    scanf("%f %f", &Operands[0].real, &Operands[0].imag);
    printf("For 2nd complex number\n");
    printf("Enter real and imaginary respectively: ");
    scanf("%f %f", &Operands[1].real, &Operands[1].imag);
    addComplex(&Operands[0], &Operands[1]);
   
}