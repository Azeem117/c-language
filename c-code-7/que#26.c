#include <stdio.h>
int main() {
    int n;
    printf("Enter The Number : ");
    scanf("%d",&n);
    int m = 0;int sum = 0;
    while(n>0){
        m = n % 10;
        n = n / 10;
        sum = sum + m;
    }
    printf("%d",sum);
}
