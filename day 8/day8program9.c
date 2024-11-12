#include <stdio.h>
void main() {
    int a[]={10,25,30,45,55};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++) {
        if(a[i]%2==0) {
            printf("%d\n",a[i]);
        }
    }
}