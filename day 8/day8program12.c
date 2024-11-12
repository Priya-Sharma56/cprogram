#include <stdio.h>
#include<stdlib.h>
int main() {
    int a=5;
    int b=6;
    int *arr=(int *)malloc(a *sizeof(int));
    arr[0]=3;
    arr[1]=4;
    arr[2]=5;
    arr[3]=6;
    arr[4]=7;
    printf("%d\t%d\t%d\t%d\t%d\n",arr[0],arr[1],arr[2],arr[3],arr[4]);
     int *ar=(int *)calloc(b,sizeof(int));
    ar[0]=2;
    ar[1]=4;
    ar[2]=6;
    ar[3]=8;
    printf("%d\t%d\t%d\t%d\t\n",ar[0],ar[1],ar[2],ar[3]);
    return 0;
}