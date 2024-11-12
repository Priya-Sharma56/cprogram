#include<stdio.h>
int main() {
    float number;
    printf("Enter the floating point number;");
    scanf("%f\n",&number);
    int c=(int) number;
    printf(" The floating point number with 2 decimal places is%.2f\n",number);
    printf("Integer number of the floating  point number enterd is =%d\n",c);
    return 0; 
}