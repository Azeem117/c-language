#include <stdio.h>
#include <math.h>
int main() {
    int a;
    printf("Enter The Marks Of Student : ");
    scanf("%d",&a);
    if (a>30 && a<=100) {
        printf("passed");
    }
    else if (a<=30 && a>=0) {
        printf("Failed");
    }
    else {
        printf("Invalid Input");
    }
}