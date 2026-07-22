/* Create an array of student structure to store the roll no., name and marks in 3 subjects. Input 
the details of N students into the array and display roll no., name, and total marks of each 
student in decreasing order of total marks. */

#include <stdio.h>
#include <string.h>

// Define the student structure 
struct Student { 
    int rollNo; 
    char name[50]; 
    int marks[3]; 
    int total; 
}; 

int main()  
{ 
    int n; 

    printf("Enter the number of students: "); 
    scanf("%d", &n); 

    struct Student students[n]; 

    // Input student details 
    for (int i = 0; i < n; i++)  
    { 
        printf("\nEnter details for student %d:\n", i+1); 
        printf("Roll No: "); 
        scanf("%d", &students[i].rollNo); 

        printf("Name: "); 
        scanf(" %[^\n]s", students[i].name); 

        printf("Marks in 3 subjects: "); 
        students[i].total = 0; 

        for (int j = 0; j < 3; j++)  
        { 
            scanf("%d", &students[i].marks[j]); 
            students[i].total += students[i].marks[j]; 
        } 
    } 

    // ---------------------------------
    //  Bubble Sort (corrected loop!)
    // ---------------------------------
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++)  
        { 
            if (students[j].total < students[j+1].total)  
            { 
                struct Student temp = students[j]; 
                students[j] = students[j+1]; 
                students[j+1] = temp; 
            } 
        }
    }

    // Display sorted result
    printf("\nStudent Details (Sorted by Total Marks in Descending Order):\n"); 
    printf("Roll No\tName\t\tTotal Marks\n"); 
    printf("-----------------------------------------\n"); 

    for (int i = 0; i < n; i++)  
    { 
        printf("%d\t%s\t\t%d\n", students[i].rollNo, students[i].name, students[i].total); 
    } 

    return 0; 
}
