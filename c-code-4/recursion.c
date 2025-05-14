#include <stdio.h>
#include <math.h>
void PrintHW(int n);
int main() {
    int n;
    printf("Enter The Number : ");
    scanf("%d",&n);
    printHW(n);
    return 0;
        
}
void printHW(int n) {
    if(n==0) {
        return;
    }
    printf("Hello World\n");
    printHW(n-1);

}