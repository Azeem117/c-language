#include <stdio.h>
int main() {
  int n;
  printf("Enter n : ");
  scanf("%d", &n);
  int m = n;
  for (int i = 0; i < n; i++) {
    for(int j = 0;j<n+1-i;j++) {
        printf(" ");
    }
    for(int k=0;k<n;k++) {
        printf("*");
    }
    printf("\n");
  }
}