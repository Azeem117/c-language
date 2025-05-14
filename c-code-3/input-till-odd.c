#include <stdio.h>
int main() {
    int n;
    do {
        printf("Enter Number : ");
        scanf("%d",&n);
        if(n%2!=0) {
            printf("Ho Gaya Kam");
            break;
        }
    }while (1);   
}