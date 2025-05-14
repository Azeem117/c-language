#include <stdio.h>
#include <math.h>
int power(int a , int b);
int main() {
    int a,b,c;
    printf("Enter Number A : ");
    scanf("%d",&a);
    printf("Enter Number b : ");
    scanf("%d",&b);
    printf("%d",power(a,b));

}
int power(int a,int b) {
    int c;
    c = pow(a,b);
    return c;
    
}