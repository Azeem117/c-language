#include <stdio.h>
int main() {
    float l , b , p ;
    printf("Enter the Length of Rectangle :  ");
    scanf("%f",&l);
    printf("Enter the Length of breadth :  ");
    scanf("%f",&b);
    p = 2*(l + b);
    printf("The Perimeter Of Rectangle is : %f",p);
    return 0;
}    