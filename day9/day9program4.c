#include <stdio.h>
int main() {
    int arr[]={1,2,3,4,5,6,7,8,9};
    int temp=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++) {
        for( int j=i+1;j<n;j++) {
            if(arr[i]>arr[j]) {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++) {
        printf("%d\t",arr[i]);
    }
    return 0;
}