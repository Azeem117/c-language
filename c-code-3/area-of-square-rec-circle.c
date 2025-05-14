#include <stdio.h>
#include <math.h>
float areaS(float l);
float areaR(float m ,float n);
float areaC(float r);
int main() {
    float l , m , n , r , op;
    printf("whos Area Do You Want To Calculate : \n1 : Area of Square\n2 : Area of Rectangle\n3 : Area of Circle \n");
    scanf("%f",&op);
    if(op==1) {
        printf("Enter The Side Of Square : ");
        scanf("%f",&l);
        areaS(l);
    }
    else if(op == 2) {
        printf("Enter The Sides Of Rectangle  : ");
        scanf("%f",&m);
        scanf("%f",&n);
        areaR(m,n);        
    }
    else if(op == 3) {
        printf("Enter The Radius Of Circle : ");
        scanf("%f",&r);
        areaC(r);
    }
    else {
        printf("Invalid Operator");
    }
}
float areaS(float l) {
    printf("Area Of The Square is : %f",l*l);

}
float areaR(float m , float n) {
    printf("Area Of Rectangle Is : %f",m*n);
}
float areaC(float r) {
    printf("Area of the Circle is : %f",3.14*r*r);
}