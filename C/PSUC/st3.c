//   Write a program to concatenate/length/copy two strings using the library function
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, 100, stdin);
    str2[strcspn(str2, "\n")] = '\0';

    strcat(str1, str2);

    printf("Concatenated string = %s", str1);

    return 0;
}
