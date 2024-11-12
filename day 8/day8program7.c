#include<stdio.h> 
int main() {
    bool b=true;
    int a=7;
    for(int i=2;i<=a;i++) {
        if(a%i==0) {
            b=false;
            break;
        }
    }
    if(b) {
        printf("yes");
        }
    else {
        printf("no");
    }
    return 0;
}
