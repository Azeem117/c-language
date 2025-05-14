#include <stdio.h>
int main() {
    int n;
    long int fac;//factorial
    fac = 1;
    printf("Enter N : ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++) {
        fac = fac*i;
    }
    printf("Factorial Of The Number Is : %ld",fac);
}