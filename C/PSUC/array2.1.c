//Write a program to take 3 student marks of 5 subjects. Print the total marks of each student and average marks of each subject.

#include <stdio.h>

int main() {
    int marks[3][5]; // 3 students, 5 subjects
    int i, j;

    // Input marks
    printf("Enter marks of 3 students in 5 subjects:\n");
    for (i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        for (j = 0; j < 5; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    // 1. Total marks of each student
    printf("\nTotal marks of each student:\n");
    for (i = 0; i < 3; i++) {
        int total = 0;
        for (j = 0; j < 5; j++) {
            total += marks[i][j];
        }
        printf("Student %d Total = %d\n", i + 1, total);
    }

    // 2. Average marks of each subject
    printf("\nAverage marks of each subject:\n");
    for (j = 0; j < 5; j++) {
        float avg = 0;
        for (i = 0; i < 3; i++) {
            avg += marks[i][j];
        }
        avg = avg / 3.0;
        printf("Subject %d Average = %.2f\n", j + 1, avg);
    }

    return 0;
}
