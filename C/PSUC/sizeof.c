#include <stdio.h>
int main () {
int inttype ;
float floattype;
char chartype;
double doubletype;

printf("size of int type is %zu bytes\n",sizeof(inttype));
printf("size of float type is %zu bytes\n",sizeof(floattype));
printf("size of char type is %zu bytes\n",sizeof(chartype));
printf("size of int double is %zu bytes\n",sizeof(doubletype));


    return 0;
}