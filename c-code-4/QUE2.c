#include <stdio.h>
#include <math.h>
float sum(float a);
float main() {
    int a;
    printf("Enter Number A : ");
    scanf("%d",&a);
    printf("square root of the function is : %f",sum(a));
}
float sum(float a) {
    a = pow(a,(0.5));
    return a;
}