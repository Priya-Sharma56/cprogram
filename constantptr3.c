#include<stdio.h>
int main() {
    int t=1000;
    const int * const p=&t;
   // (*p)++;
   int d=200;
  // p=&d;
  t++;
  printf("%d\n",t);
  return 0;
}

