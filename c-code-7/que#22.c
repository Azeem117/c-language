//gp  
#include <stdio.h>
#include<math.h>
int main() {
    int a,n;float r;
    printf("Enter FIRST TERM : ");
    scanf("%d",&a);    
    printf("Enter COMMON RATIO : ");
    scanf("%f",&r);    
    printf("Enter NUMBER OF TERMS : ");
    scanf("%d",&n);    
    for (int i = 1;i<=n;i++){
     // printf("%lf ",a*pow(r,i-1));
        printf("%d ",a);
        a = a * r;

    }
}