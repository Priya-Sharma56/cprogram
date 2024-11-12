#include <stdio.h>
void main() {
    int a[]={10,25,30,45,55};
    int n=sizeof(a)/sizeof(a[0]);
    int b=0;
    for(int i=0;i<n;i++) {
        b+=a[i];
    }
    printf("%d",b);
}