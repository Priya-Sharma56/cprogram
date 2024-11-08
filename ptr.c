#include<stdio.h>
int main() {
   // int *ptr=NULL;
   // printf("%d",ptr);
   int x=10,y=20;
   int *const ptr=&x;
   *ptr=&y;
   printf("%d",*ptr);
    return 0;
}