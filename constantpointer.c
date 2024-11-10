#include<stdio.h>
void main() {
    int t=700;
    const int *p=&t;     //canot change the value of t using pointer p
    //(*p)++;
    t++;
    printf("%d\n",t);
}