#include<stdio.h>
int main () {
    int t=700;
    int * const p=&t;
    (*p)++;
    printf("%d",*p);
    int z=200;
    p=&z;
    return 0;
}