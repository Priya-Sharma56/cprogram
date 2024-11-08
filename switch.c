#include<stdio.h>
int main () {
    int n=50;
   /* printf("enter the value of n");
    scanf("%d",n);*/
    switch(n%2) {
        case 0:
              printf("%d is an even number",n);
              break;
        case 1:
              printf("%d is an odd number",n);
    }
}