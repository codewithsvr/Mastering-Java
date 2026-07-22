#include <stdio.h>
#include <math.h>

int main () {

int i,j,n,power,sign=1;
double x,term,sum=0;
long long fact = 1;

printf("enter the value of x in radians :");
scanf("%lf",&x);
printf("enter no of terms :");
scanf("%d",&n);

for(i=0;i<n;i++) 
{
    power = 2*i +1;
fact=1;
for(j=1;j<=power;j++) 
{ fact *= j;
}
term = pow(x,power) / fact;
    sum += sign * term;
    sign=-sign; }

   printf("the sum of sin series of %d terms = %.6lf",n,sum);
   printf("by using math.h sin (x) = %.6lf",sin(x)); 

    return 0;
}  