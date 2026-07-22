/* Define a structure Person that would contain person name, date of joining and salary.  Using 
this structure write a program to read this information for 5 persons from the keyboard and 
print the same on the screen. */

#include <stdio.h>

struct person 
{
    char name[20];
    char doj[10];
    float salary;
} p[5];

int main(void)
{
    int i;

    // Input section
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter Person %d Name: ", i + 1);
        scanf("%s", p[i].name);

        printf("Enter Person %d Date of Joining (dd-mm-yyyy): ", i + 1);
        scanf("%s", p[i].doj);

        printf("Enter Person %d Salary: ", i + 1);
        scanf("%f", &p[i].salary);
    }

    // Output section
    printf("\n\n----- Displaying Details -----\n");
    for (i = 0; i < 5; i++)
    {
        printf("\nPerson %d Details", i + 1);
        printf("\nName   = %s", p[i].name);
        printf("\nDOJ    = %s", p[i].doj);
        printf("\nSalary = %.2f\n", p[i].salary);
    }

    return 0;
}
