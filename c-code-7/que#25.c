#include <math.h>
#include <stdio.h>

int main() {
  int n;
  int m = 0;
  int cout = 0;
  printf("Enter The Number : ");
  scanf("%d", &n);
  while (n > 0) {
    m = n % 10;
    n = n / 10;
    cout += 1;
  }
  printf("%d", cout);
}