#include <stdio.h>
int main() {
    int a;
    printf("Enter The Year : ");
    scanf("%d",&a);
    if (a%4==0) {
        printf("Leap Year");

    }   
    else{
        printf("Not Leap Year");
    } 
}