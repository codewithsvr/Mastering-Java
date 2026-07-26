#include<stdio.h>
int binary(int a[],int n,int key) {
    int low=0,high=n-1;
    while(low<=high) {
        int mid=(low+high)/2;
        if(a[mid]==key)
        return mid;
        else if (a[mid] < key)
        low=mid+1;
        else
        high=mid-1;
    }
    return -1;
}
int main () {
    int n,key,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    scanf("%d",&key);
    int result=binary(a,n,key);
   if(result != -1)
   printf("element found at index %d",result);
   else printf("element not found");
   return 0;
}