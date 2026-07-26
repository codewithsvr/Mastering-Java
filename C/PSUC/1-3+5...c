#include <stdio.h> 
int main () {
int i,n,sign,sum=0,term;

printf("enter the nth number :");
scanf("%d",&n);

for(i=1;i<=n;i++) {
    term=(2*i)-1;
    sum += term* sign;
      sign=-sign;
    

} printf("the sum of series is %d",sum);

    return 0;
}   