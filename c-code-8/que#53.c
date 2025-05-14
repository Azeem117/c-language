#include <stdio.h>
int main() {
  int n;
  printf("Enter n : ");
  scanf("%d", &n);
  int m = n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int k = j;
      for( k = 0 ;k<n+1-i;k++){
        printf(" ");
      }
      for(int l=0;l<i;l++){
        printf("*");
      }
    }
    printf("\n");
  }
}