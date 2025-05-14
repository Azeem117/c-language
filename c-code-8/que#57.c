#include <stdio.h>
int main() {
  int n;
  printf("Enter n : ");
  scanf("%d", &n);
  int m = n;
  int l = 1;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= 2 * i - 1; j++) {
      printf("%d",i);
    }

    printf("\n");
  }
}