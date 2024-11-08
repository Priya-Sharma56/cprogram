#include<stdio.h>
int main(){
    int t=700;
    int *ptr=&t;
    printf("%d\n",t);
    printf("%d\n",*ptr);
    t++;
    printf("%d\n",t);
    printf("%d\n",*ptr);
    (*ptr)++;
    printf("%x\n",ptr);
    printf("%x\n",&t);
    printf("%x\n",&ptr);
    return 0;
}