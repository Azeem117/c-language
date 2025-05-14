#include <stdio.h>
int main() {
  int n;
  printf("Enter The Number : ");
  scanf("%d", &n);
  int fac = 1;
  for (int i = 1; i <= n; i++) {
    fac = fac * i;
    printf("factorial of %d is %d \n",i,fac);
  }
}