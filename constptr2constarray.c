#include<stdio.h>
int main() {
    //internally compiler converts the arr into *arrso we cannot increase or decrease the value of arr like arr++
    int arr[6]={100,290,112,56,289,11};
    int * const ptr=&arr[0];
   // arr++;
   // ptr++;
   arr[2]=25;
   *(ptr+2)=119;
   printf("%d\n",arr[2]);
   return 0;
}