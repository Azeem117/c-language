#include <stdio.h>

void square(int n) {
    n = n * n;
    printf("square : %d\n",n);
}
void _square(int *n) {
    (*n) = (*n) * (*n);//value at address of n * val at address of n
    printf("square : %d\n", *n);
} 
int main() {
    int number = 4;
    square(number);
    printf("number = %d\n",number);
    _square(&number);
    printf("number = %d\n",number);

}