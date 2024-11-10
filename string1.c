
//using arrays to store the string
#include<stdio.h>
int main () {
    char name[12]={'c','i','t','y','c','o','l','l','e','g','e','\0'};
    int count=0;
    char c[5];
    //printf("%c\n",name[1]);
    //printf("%c\n",name[3]);
    //for(int i=3;i>=0;i--) {
     //  printf("%c\n",name[i]);
   // }
   printf("vowels are:\n");
    for( int j=0; name[j] !='\0';j++) {
        if( name[j]=='a'  ||name[j]=='e' || name[j]=='i' || name[j]=='o' || name[j]=='u') {
            count++; 
            printf("%c\n",name[j]);
        }  
    }
    printf("\n");
    printf("number of vowels=%d",count);
    return 0;
}
