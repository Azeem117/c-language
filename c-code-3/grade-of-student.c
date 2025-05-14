#include <stdio.h>
int main() {
    int a;
    printf("Enter The Marks Of Student : ");
    scanf("%d",&a);
    if(a<=100 && a>=90) {
        printf("A+");
    }    
    else if (a<90 && a>=70) {
        printf("A");
    }
    else if(a>=30 && a<70) { 
        printf("B");
    }
    else if (a<30 && a>=0) {
        printf("C");
    
    }
    else {
        printf("Invalid command");
    }

}