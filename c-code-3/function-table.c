#include <stdio.h>
void table(int n);
int main() {
    int n;
    printf("Enter The Number : ");
    scanf("%d",&n);
    table(n);// argument or actual parameter 
    return 0;

}
void table(int n) {//parameter or formal parameter
    for(int i = 1;i<=10 ;i++) {
        printf("%d\n",i*n);
    }
}