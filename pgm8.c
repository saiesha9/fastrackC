#include <stdio.h>
int main(){
    int a;
    double b;
    float c;
   char d;
    printf("Size of int: %ld bytes\n",sizeof(a));
    printf("Size of float: %ld bytes\n",sizeof(b));
    printf("Size of double: %ld bytes\n",sizeof(c));
    printf("Size of char: %ld byte\n",sizeof(d));
    return 0;
}