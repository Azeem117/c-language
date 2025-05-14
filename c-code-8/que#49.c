#include <stdio.h>
int main() {
  int n;
  printf("Enter n : ");
  scanf("%d", &n);
  int p = n / 2 + 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (i == j || j + i == n + 1)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
}