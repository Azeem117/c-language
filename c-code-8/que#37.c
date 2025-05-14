// basic pattern
#include <stdio.h>
int main() {
  int n;
  int m;
  printf("Enter The n : ");
  scanf("%d", &n);
  printf("Enter The m : ");
  scanf("%d", &m);

  for (int j = 1; j <= m; j++) {

    for (int i = 1; i <= n; i++)
      printf("*");

    printf("\n");
  }
}