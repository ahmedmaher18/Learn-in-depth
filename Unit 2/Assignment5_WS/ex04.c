#include "stdio.h"

#define SIZE 10
typedef struct
{
    /* data */
    char name[50];
    int rollNumber;
    float grade;
}Student_t;

int main()
{
    Student_t Students[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        Students[i].rollNumber = i+1;
        printf("For roll number %d \n",Students[i].rollNumber);
        printf("Enter Name: ");
        scanf("%s",&(Students[i].name));

        printf("Enter Marks: ");
        scanf("%f", &Students[i].grade);
    }
        for (int i = 0; i < SIZE; i++)
    {
        printf("-------------------------------------------\n");
        printf("Displaying Information for roll number %d\n",Students[i].rollNumber);
        printf("Name: %s\n", Students[i].name);
        printf("Marks: %.2f\n", Students[i].grade);
    }

}