#include<stdio.h>
int main () {
    int numbers[5]={100,23,45,78,10};
   // for(int i=0;i<5;i++) {
     //   printf("%d\n",numbers[i]);
   // }
    printf("%d\n",numbers[0]);
    printf("%d\n",numbers[2]);
    printf("%d\n",*(numbers+2));
    //(number+2*2)
    //*(number+ 2*2)
    numbers[2]=800;
    printfptr3arary("%d\n",numbers[2]);
    *(numbers+2)=1000;
    printf("%d\n",numbers[2]);
    return 0;
}