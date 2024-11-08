#include<stdio.h>
void sum(int a,int b)
{
    int c=a+b;
    printf("c=%d\n",c);
    a++;b++;
    sum(a,b);
}
void main () {
    int a=10,b=20;
    sum(a,b);
    printf("hello ji");
}