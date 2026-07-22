#include <stdio.h>

int main() {
    int n,i=0,j,binary[32];
    printf("enter the number : ");
    scanf("%d",&n);
    if (n==0)
    {
        printf("binary=0\n");
        return 0;
    } 
    while (n>0)     {
        binary[i]=n%2;
        n /= 2;
        i++;}
        printf("binary=");
        for (j=i-1;j>=0;j--) 
        { printf("%d",binary[j]);
}

    return 0;
}
