#include<stdio.h>
#include<stdbool.h>
int main() {
    int arr[]={5,7,2,8,4,9,10};
    int x=4;
    bool b=false;
    int n=sizeof(arr)/sizeof(arr[0]);
    for( int i=0;i<n;i++) {
        if(arr[i]==x) {
            b=true;
            break;
        }
    }
    if(b) {
        printf("yes");
     }  
    else{
        printf("no");
    }
    return 0;
}
