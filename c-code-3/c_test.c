#include <math.h>
#include <stdio.h>

int main() {
   int n;
   scanf("%d",&n);
   int a = 0;int b =1;
   int sum =0;
   for(int i = 1;i<n;i++){
    sum += a;
    a = b;
    b = sum;
    printf("%d ",sum);
   }
}