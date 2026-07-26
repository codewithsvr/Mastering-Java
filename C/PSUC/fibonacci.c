
/* starts with 0 and 1 and the next terms is sum of previous two terms */
#include <stdio.h>

int main () {
int i,n;
int t1=0,t2=1,next_term;
printf("enter the no of terms :");
scanf("%d",&n);
for (i=1;i<=n;i++) {
    printf("%d\t",t1);
    next_term=t1+t2;
    t1=t2;
    t2=next_term;
}

    return 0;
}