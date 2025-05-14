#include <stdio.h>
#include <math.h>
int fac(int n);
int main() {
    int n;
    printf("Enter N for Factorial :");    
    scanf("%d",&n);
    printf("Factorial of the number is : %d",fac(n));

}
int fac(int n) {
    if(n == 1) {
        return 1;
    }
    int facNm1 = fac(n-1) ;
    int facN = facNm1 * n;
    return facN;
    return 0;
}

