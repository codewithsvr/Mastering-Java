#include <stdio.h> 
int main  () {

int n,i,large;
printf("enetr no of numbers : ");
scanf("%d",&n);

int ar[n];
printf("enter all values : ");
for(i=0;i<n;i++) {
    scanf("%d",&ar[i]);
} 
large=ar[0];
for(i=1;i<n;i++) {
    if (ar[i] > large) 
    large=ar[i];
}

printf("largest no is : %d",large);





    return 0 ;
}