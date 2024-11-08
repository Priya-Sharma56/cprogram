#include<stdio.h>
int main() {
    int a[]={1,5,15,20};
    for(int i=0;i<4;i++) {
        printf("I=%d\t",i);
        switch(a[i]) {
            case 1 ... 6:
               printf("%d is in te range of 1 to 6\n",a[i]);
               break;
            case 7 ... 20:
               printf("%d is in ths range of 7 to 20\n",a[i]);
               break;
        default:
            printf("%d not in the range\n",a[i]);
            break;
        }
    }
    return 0;
}