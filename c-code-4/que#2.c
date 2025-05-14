#include <stdio.h>
#include<math.h>
float spa(float *a , float *b) {
    float sum,pro;
    float *avg;  
    sum = (*a) + (*b);
    pro = (*a) * (*b);
    *avg = ((*a)+(*b))/2;
    float t = *avg;

    printf("The Sum Is : %f\nThe Product is : %f\n",sum,pro);
    return t;
}
int main() {
    float sum , pro , avg;
    float a , b,t;
    printf("Enter Number A : ");
    scanf("%f",&a);
    printf("Enter Number  B : ");
    scanf("%f",&b);
    spa(&a, &b);
    printf("Average is : %p\n",*t);

    return 0;

}