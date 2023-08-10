#include "stdio.h"

#define EMPLOYEES_NUM 2
typedef struct 
{
    /* data */
    char name[50];
    int ID;
}employee_t;
int z = 3;
int main()
{
    employee_t emp1 = {"Alex", 1002}, emp2 = {"Mark", 1003};
    employee_t * emp_arr[EMPLOYEES_NUM] = {&emp1, &emp2};
    for (int i = 0; i < EMPLOYEES_NUM; i++)
    {
        printf("Employee Name: %s\n", emp_arr[i]->name);
        printf("Employee ID: %d\n\n", emp_arr[i]->ID);
    }
}