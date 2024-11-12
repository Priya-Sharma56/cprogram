#include <stdio.h>
int main() {
    int a[]={10,20,30,40,90,50,56,70,476,76};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=n-1;i>=0;i--) {
        printf("%d\n",a[i]);
    }
    return 0;
}