#include <stdio.h>
int main() {
    int n;
    printf("Enter the number whose table you want : ");
    scanf("%d",&n);
    for(int i = 1; i<=(10);i++){
        printf("%d\n",i*n);
    }

}