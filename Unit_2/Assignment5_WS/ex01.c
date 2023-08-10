#include "stdio.h"

typedef struct
{
    /* data */
    char name[50];
    int rollNumber;
    float grade;
}Student_t;

int main()
{
    int n;
    printf("Enter Number of students: ");
    scanf("%d", &n);
    Student_t Students[20];
    for (int i = 1; i <= n; i++)
    {
        printf("Enter Information for student %d \n",i);
        printf("Enter Name: ");
        scanf("%s",&(Students[i].name));
        printf("Enter roll number: ");
        scanf("%d", &Students[i].rollNumber);
        printf("Enter Marks: ");
        scanf("%f", &Students[i].grade);
    }
        for (int i = 1; i <= n; i++)
    {
        printf("-------------------------------------------\n");
        printf("Displaying Information for Student %d\n",i);
        printf("Name: %s\n", Students[i].name);
        printf("Roll: %d\n", Students[i].rollNumber);
        printf("Marks: %.2f\n", Students[i].grade);
    }

}