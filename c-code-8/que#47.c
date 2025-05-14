#include <stdio.h>
int main() {
  int n;
  printf("Enter n : ");
  scanf("%d", &n);
  char cj = '*';
  int p = n / 2 + 1;
  if (n % 2 != 0) {
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
        if (i == p || j == p)
          printf("*");
        else
          printf(" ");
      }
      printf("\n");
    }
  }
}