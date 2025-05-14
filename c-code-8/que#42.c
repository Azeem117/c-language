#include <stdio.h>
int main() {
  int n;
  int k = 0;
  int j = 0;
  printf("Enter n : ");
  scanf("%d", &n);
  for (int i = 0; i <= n; i++) {
    for (j = 0; j < n - i; j++) {
      printf("%d ", j + 1);
    }

    printf("\n");
  }
}