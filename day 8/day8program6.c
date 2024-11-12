#include <stdio.h>
int main() {
    int a=12321,x=0,y=0,f=a;
    while(a>0) {
        x=a%10;
        y=y*10+x;
        a=a/10;
    }
    if(y==f) {
        printf("yes");
    }
    else {
        printf("no");
    }
    return 0;
}