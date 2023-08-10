#include "stdio.h"

int main()
{
    char operator;
    float op1, op2;
    double result;
    printf("Enter operator either + or - or * or / : ");
    scanf("%c",&operator);
    printf("enter two operands: ");
    scanf("%f %f",&op1, &op2);
    switch (operator)
    {
        case '+':
        printf("%.1f + %.1f = %.1f",op1,op2,op1 + op2);
        break;
        case '-':
        printf("%.1f - %.1f = %.1f",op1,op2,op1 - op2);
        break;
        case '*':
        printf("%.1f * %.1f = %.1f",op1,op2,op1 * op2);
        break;
        case '/':
        printf("%.1f / %.1f = %.1f",op1,op2,op1 / op2);
        break;
        default:
        printf("Please enter a valid operator!");
        break;
    }
}
