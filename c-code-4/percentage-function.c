#include <stdio.h>
#include<math.h>
float per(float a,float b,float c,float d,float e);
int main() {
    float a,b,c,d,e;
    printf("Percentage of student is :   %f percent",per(a,b,c,d,e));
}
float per(float a,float b,float c,float d,float e) {
    printf("Enter The Marks of English : ");
    scanf("%f",&a);
    printf("Enter The Marks of Physical : ");
    scanf("%f",&b);
    printf("Enter The Marks of Physics :");
    scanf("%f",&c);
    printf("Enter The Marks of Chemistry :");
    scanf("%f",&d);
    printf("Enter The Marks of Maths : ");
    scanf("%f",&e);
    float sum,per;
    sum = a+b+c+d+e;
    per=(sum/5);
    return per;


}