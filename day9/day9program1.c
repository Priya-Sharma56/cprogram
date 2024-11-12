#include<stdio.h>
int main() {
    int a=1110,b=220,c=3330;
    if(a>b) {
        if(a>c) {
          printf("a is the the greatest") ;
        }else{
            printf("c greater");
        }
    }
    else if(b>c) {
        
          printf("b is the greatest");  
        
    }
    else{
      printf("c is greater");  
    }
    return 0;
}