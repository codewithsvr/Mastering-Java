/* Create an array of employee structure to store emp-no, name, basic salary and hra. Input the 
details of N employees and display emp-no, name, basic, hra and net salary. Display the 
details of all employees whose net salary is more than the average net salary of all 
employees. */
#include <stdio.h>
#include<string.h>
// Define the employee structure 
struct Employee {
    int empNo;
    char name[50];
    float basic;
    float hra;
    float netSalary;
};

int main() {
    int n;
    float totalNetSalary = 0, averageNetSalary;

    // Input number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Create array of employee structures
    struct Employee employees[n];

    // Input employee details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);

        printf("Employee Number: ");
        scanf("%d", &employees[i].empNo);

        printf("Name: ");
        scanf(" %[^\n]s", employees[i].name);

        printf("Basic Salary: ");
        scanf("%f", &employees[i].basic);

        printf("HRA: ");
        scanf("%f", &employees[i].hra);

        // Calculate net salary
        employees[i].netSalary = employees[i].basic + employees[i].hra;
        totalNetSalary += employees[i].netSalary;
    }

    // Calculate average net salary
    averageNetSalary = totalNetSalary / n;

    // Display all employees
    printf("\nAll Employee Details:\n");
    printf("Emp No\tName\t\tBasic\t\tHRA\t\tNet Salary\n");
    printf("---------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\t\t%.2f\t\t%.2f\n",
               employees[i].empNo,
               employees[i].name,
               employees[i].basic,
               employees[i].hra,
               employees[i].netSalary);
    }

    // Display employees with above-average salary
    printf("\nEmployees with Above-Average Net Salary (Average: %.2f):\n",
           averageNetSalary);
    printf("Emp No\tName\t\tBasic\t\tHRA\t\tNet Salary\n");
    printf("---------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        if (employees[i].netSalary > averageNetSalary) {
            printf("%d\t%s\t%.2f\t\t%.2f\t\t%.2f\n",
                   employees[i].empNo,
                   employees[i].name,
                   employees[i].basic,
                   employees[i].hra,
                   employees[i].netSalary);
        }
    }

    return 0;
}
