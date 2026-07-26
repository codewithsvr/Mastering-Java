//2.Write a program to find the sum of odd index numbers in an array.
#include <stdio.h>

int main () {

int i,n,sum=0,j;
int ar[10];
printf("enter 10 numbers ");

for (i=0;i<10;i++) {

scanf("%d",&ar[i]);
 }
for(j=1;j<10;j+=2)

{
    sum +=ar[j];
}
printf("sum of odds is %d",sum);

    return 0;
}