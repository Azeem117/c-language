#include <stdio.h>
int main() {
    int x ;
    printf("Enter The Number : ");
    scanf("%d",&x);
    printf("%d", x % 2 == 0);
    return 0;
}