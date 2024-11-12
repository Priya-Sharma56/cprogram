#include <stdio.h>

int main() {
   int m=5;
   int c=0;
   for(int i=10;i>0;i--) {
       c=i*m;
       printf("%d * %d =%d\n",i,m,c);
   }
   return 0;
}