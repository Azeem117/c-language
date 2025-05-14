#include <stdio.h>
int main() {
    int i ;
    printf("Enter The Number : ");
    scanf("%d",&i);
    int *ptr = &i;
    int **pptr = &ptr;
    // printf("%p \n%p",ptr,pptr);
    printf("%d",**(pptr));

}