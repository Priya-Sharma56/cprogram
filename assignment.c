#include <stdio.h>
int main(){
    char character;
    printf("Enter an Alphabet = \n");
    scanf("%c",&character);
    if(character>='A' && character<='Z')
    {
        character+=32;
        printf("The lower case of the given input is = %c\n",character);
    }
    else if(character>='a' && character<='z')
    {
        character-=32;
        printf("The upper case of the given input is = %c\n",character);
    }
    else{
        printf("Invalid Input...!\n");
    }
}