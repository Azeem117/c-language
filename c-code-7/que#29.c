#include <stdio.h>
int main() {
  int n;
  printf("Enter The Number : ");
  scanf("%d", &n);
  int u = 0;
  u = n;
  int num = 0, m = 0, i = 10;
  while (n > 0) {
    m = n % 10;
    n = n / 10;
    num = m + num * i;
  }
  int sum = 0;
  sum = u + num;
  printf("Reverse Is %d ", num);
  printf("\nSum is : %d ", sum);
}