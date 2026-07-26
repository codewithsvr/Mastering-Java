#include <stdio.h> 

int main () {

int i,j,n;
printf("enter the no of rows :");
scanf("%d",&n);

for (i=1;i<=n;i++) {
    for(j=1;j<=i;j++) {
        printf("%d\t",i);
    } printf("\n");
}

for(i=n;i>=1;i--) {
    for(j=1;j<=i;j++) {
        printf("%d\t",i);
    } printf("\n");
} 


    int rows = 5;
    int starting_values[] = {1, 2, 3, 6, 9};

    for (i = 0; i < rows; i++) {
        for (j = 0; j <= i; j++) {
            // The value to print is the starting value for the current row
            // plus 2 for each column after the first one.
            printf("%d\t", starting_values[i] + j * 2);
        }
        printf("\n");
    }

    return 0;
}