#include <stdio.h>
int main() {
    char ch;
    printf("Enter The Character : ");
    scanf("%c",&ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Character is capital");
    
    }  
    else if(ch >= 'a' && ch <= 'z') {
        printf("Not Capital");
    }  
    else{
        printf("Invalid input");

    }
}