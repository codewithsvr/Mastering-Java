/* Consider a scenario where you are developing a program in C to manage a library system. The program should utilize structures to handle book information. The program should perform the following tasks:

a. Define a structure named Book with the following attributes:

Book_ID (integer)

Title (string)

Author (string)

Price (float)

b. Create an array of structures to store information of 3 books in the library inventory.

c. Display the information of all 3 books. */

#include <stdio.h>

// Define structure
struct Book {
    int Book_ID;
    char Title[50];
    char Author[50];
    float Price;
};

int main() {
    struct Book books[3];

    // Input details of 3 books
    for (int i = 0; i < 3; i++) {
        printf("\nEnter details of Book %d:\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &books[i].Book_ID);

        printf("Title: ");
        scanf(" %[^\n]s", books[i].Title);

        printf("Author: ");
        scanf(" %[^\n]s", books[i].Author);

        printf("Price: ");
        scanf("%f", &books[i].Price);
    }

    // Display all book information
    printf("\n--- Library Inventory (3 Books) ---\n");
    printf("ID\tTitle\t\tAuthor\t\tPrice\n");
    printf("----------------------------------------------\n");

    for (int i = 0; i < 3; i++) {
        printf("%d\t%s\t\t%s\t\t%.2f\n",
            books[i].Book_ID,
            books[i].Title,
            books[i].Author,
            books[i].Price);
    }

    return 0;
}
