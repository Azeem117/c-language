#include <stdio.h>
int sum(int x,int y);
int main() {
    int a , b;
    printf("Enter Number A : ");
    scanf("%d",&a);
    printf("Enter Number B : ");
    scanf("%d",&b);
    int s = sum(a,b);
    printf("The Sum Is : %d",s);

    return 0;
}
int sum(int x,int y) {
    return x + y;
}