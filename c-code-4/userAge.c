#include <stdio.h>
int main() {
    int age;
    printf("Enter Age : ");
    scanf("%d",&age);
    if(age>18) {
        printf("Adult\n");
        printf("they can vote\n");
        printf("they can drive\n");
    }   
    else{
        printf("Not Adult\n");
        printf("they cannot vote\n");
        printf("they cannot drive\n");
    }
}