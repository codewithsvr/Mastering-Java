// 1.	Write a program to find the largest and smallest element in an array.

#include <stdio.h>

int main () {

int ar[5],lr,sml,i;
printf("enter 5 numbers ");
for(i=0;i<5;i++) 
{ scanf("%d",&ar[i]);
    
}
lr=sml=ar[0];
for(i=1;i<5;i++) {
if(ar[i] > lr) 
lr=ar[i];
if (ar[i]<sml) 
sml=ar[i];

}
printf("largest is %d\n",lr);
printf("smallest is %d\n",sml);

    return 0;
}
  