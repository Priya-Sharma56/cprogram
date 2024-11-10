#include<stdio.h>
int main () {
    int t=700;
    int *ptr=&t;
    int **ptr2=&ptr;
    printf("%d\t%d\t%d\n",t,*ptr,**ptr2);
    (**ptr2)++;
    printf("%d\t%d\t%d\n",t,*ptr,**ptr2);
    printf("%x\t%x\n",ptr,&t);
    printf("%x\t%x\n",&ptr,ptr2);
    ptr2=NULL;
    printf("-------");
    printf("%d\n",t);
    printf("*p=%d",*ptr);
    printf("**pptr2=%d",**ptr2);
    return 0;
}