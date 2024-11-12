#include <stdio.h>
#include<stdlib.h>
int main() {
    int a=5;
    int *arr=(int *)malloc(a *sizeof(int));
    arr[2]=200;
    arr[0]=20;
    printf("%d\n",arr[2]);
    printf("%d\n",arr[0]);
    return 0;
}