#include<stdio.h>
int main() {
    puts ("for loop example");
   for(;;) {
   int i=0,j=25;
   for(;i<j--;j=j-3,i++) {
    printf("*****\n");
   }
   printf("%d",i*j);
   for(int j=0;j<7;j++)  {
    printf("j=%d\t",j);
    getchar();
   }
   for(printf("increment\t");printf("condition checking\t");
   printf("updation\t")){
    printf("hello");
    getchar();
   }
   return 0;
}