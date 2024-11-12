#include <stdio.h>
int main() {
    int i=5;
    int fact=1;
    while(i>=1) {
        fact=fact*i;
        i--;
    } 
    printf("%d",fact);
    return 0;
}