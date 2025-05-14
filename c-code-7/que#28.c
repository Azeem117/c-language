#include <stdio.h>
int main() {
  int n;
  printf("Enter The Number : ");
  scanf("%d", &n);
  int m = 0;
  int num = 0;
  int i = 10;
  while (n > 0) {
    m = n % 10;
    n = n / 10;
    num = num * i + (m);
  }
  printf("%d", num);
}