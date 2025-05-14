#include <stdio.h>
int main() {
    printf("Enter A Number : ");
    int a;
    scanf("%d",&a);
    if(a%5!=0) {
        printf("Number is not Div By 5");

    }   
    else {
        printf("Number is Div By 5");
    } 
}