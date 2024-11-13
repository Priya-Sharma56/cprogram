#include <stdio.h>
int main() {
    int arr[]={1,4,8,7,5,3};
    int x=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++) {
        if(arr[i]>x){
            x=arr[i];
        }
    }
    printf("greatest number in the array%d",x);
    return 0;
}