#include <stdio.h>
#include <math.h>
int main() {
    int a;int sum;
    sum = 0;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&a);
    for(int i = 1; i<=a;i++) {
        sum = sum + i;
    }
    printf("Sum Is : %d",sum);
}