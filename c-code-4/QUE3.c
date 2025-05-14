#include <stdio.h>
#include <math.h>
int temp(int a);
int main() {
    int a;
    printf("Enter temp : ");
    scanf("%d",&a);
    temp(a);
}
int temp(int a) {
    if(a>=50 && a<=100) {
        printf("very hot");
    }
    else if(a<=50 && a>=0) {
        printf("cold");
    }
    else{
        printf("ya to jam chuke ho ya ubal chuke ho");
    }
}