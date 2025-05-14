#include <stdio.h>
int main() {
  int n;
  printf("Enter n : ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    int k = 0;
    if ( k< n) {
      for ( k = 0; k < i; k++) {
        printf("*");
      }
    }
    if (k == n || k > n) {
      for (int k = n;k<i; k--) {
        printf("*");
      }
    }
    printf("\n");
  }
}