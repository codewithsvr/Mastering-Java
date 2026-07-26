#include <stdio.h>

int main () {
int n,i,count=0;
printf("enter a number : ");
scanf("%d",&n);
if (n<=1) {
    printf("not prime\n");
return 0; }
for (i=2;i<=n/2;i++) {
    if (n%i==0) {
        count =1;
        break;
    }
} if (count==0) {
    printf("prime number");
} else {
    printf("not prime");
}
    return 0;
} 