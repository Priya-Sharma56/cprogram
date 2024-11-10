#include<stdio.h>
int main() {
    char a[6]={'w','a','t','e','r','\0'};
    char b[5]={'a','e','i','o','u'};
    int count=0;
    printf("vowels are\n");
    for(int i=0; a[i]!=='/0';i++) {
        if(a[i]==b[0]||a[i]==b[1]||a[i]==b[2]||a[i]==b[3]||a[i]==b[4]) {
            count+=count;
            printf("%c\n",a[i]);
        }
    }
    printf("\n");
    printf("number of vowels are=%d",count);
    return 0;
}