#include <stdio.h>
void swap (int a , int b) {
    int t = a;
    a = b;
    b = t;
    printf("value of a = %d\nvalue of b = %d\n",a,b);
}
void _swap(int *a,int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
int main() {
    int x = 3;
    int y = 5;
    swap(x,y);
    _swap(&x,&y);
    printf("value of x = %d\nvalue of y = %d\n",x,y);
    
}'