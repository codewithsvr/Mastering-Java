#include <stdio.h>

int main () {

int i,j;

for(i=11;i>=1;i--) {
    for(j=1;j<=i;j++) {
        if (i==11) {
            printf("7");
            continue;
        }
            else if (j==i) {
                printf("7");
            } else {
                printf(" ");
            }
        } printf("\n");
    } 


    return 0; }