#include <stdio.h>
void as();
void bonjur();
int main() {
    printf("If Indian Enter i : \nif French Enter F :");
    char ch;
    scanf("%c",&ch);
    if (ch == 'i') {
       as(); 
    }
    else if (ch == 'f') {
        bonjur();
    }
    else {
        printf("invalid");
    }
}
void as() {
    printf("ASSALAMOALAIKUM!!!");
}
void bonjur() {
    printf("Bonjur");
}