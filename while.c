#include<stdio..h>
int main() {
    int a=10,b=20;
    int max(a>b)?0:(b==a)?1:2;
    printf("%d",max);
    return 0;
}