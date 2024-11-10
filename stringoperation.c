#include<stdio.h>
#include<string.h>
int main() {
    int i=0;
   /* char arr[15]={'c','i','t','y',' ','c','o','l','l','e','g','e','\0'};
    printf("length of the string is=%d",length);
    char str1[40]="city Engineering ";
    char str2[10]="College";
    strcat(str1,str2);
    printf("%s",str1);
   char s1[40]="hello ";
   char s2[10]="have a ";
   char s3[10]="good day ";
   strcat(s1,s2);
   strcat(s1,s3);
   printf("%s",s1);*/
   char s11[20]="Bengaluru";
   int count=0;
  /* while(s11[i]!='\0') {
    i++;
   }
   printf("length of the string=%d",i);*/
   for(int i=0;s11[i]!='\0';i++) {
    count++;
   }
   printf("len=%d",count);
    return 0;
}