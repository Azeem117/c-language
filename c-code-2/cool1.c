#include <stdio.h>
int main() {
  int n;
  printf("Enter n : ");
  scanf("%d", &n);
  int m = n;
  if (n % 2 != 0) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        for(int k = 0 ;k<2*n-1;k++ ) {
          printf("*");
        }
        for(int k = 0 ;k<2*n-1;k++) {
          printf(" ");
        }

      }
      printf("\n");
    }
  }
}