#include <stdio.h>
int main() {
    int x ;
    printf("Enter The MARKS : ");scanf("%d",&x);
    if(x>90 && x<=100) {
        printf("A++\n");
        printf("Very Good");
    } 
    else if(x>70 && x <=90) {
        printf("A+");
    } 
    else if (x>40 && x<=70) {
        printf("A");
    }  
    else if (x<=40 && x>20) {
        printf("B-");
    }
    else if(x<=20 && x>=0) {
        printf("F");    
    }
    else {
        printf("Worng Input");
    }
}