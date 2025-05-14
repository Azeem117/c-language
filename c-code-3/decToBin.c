#include<stdio.h>
void dectobin(int n){
    int binary[32];
    if(n==0) {
        printf("binary num = 0 ");
        return ;
    }
    int i = 0;
    while(n>0) {
        binary[i] = n%2;
        n = n/2;
        i++; 
    }
    for(int j = i-1;j>=0;j--){
        printf("%d",binary[j]);
    }
}
int main() {
    int n;
    scanf("%d",&n);
    dectobin(n);
    return 0;
}