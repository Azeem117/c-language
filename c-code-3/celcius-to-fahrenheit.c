#include <stdio.h>
#include<math.h>
float fah(float c);
int main() {
    float f;
    float c;
    printf("Enter The Temperature in  degree c : ");
    scanf("%f",&c);
    
    printf("Temperature in f is : %f",fah(c));

}
float fah(float c) {
    float f; 
    f = (1.8*c) + 32;
    return f;
}