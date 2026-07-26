#include <stdio.h>
#include<math.h>

int main () {
int n,on,rem,count=0,temp,digits=0;
printf("enter a num :");
scanf("%d",&n);
on=n;
temp=n;
while (temp!=0) {
    temp/=10;
    digits++;}
    temp=n;
while (temp != 0) {
    rem = temp % 10;
    count += pow(rem,digits);
    temp /= 10;

} if (count==on) {
    printf("armstrong");
} else {
    printf("not armstrong");
}

    return 0;
} 