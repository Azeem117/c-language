#include <stdio.h>
int main() {
  int a, d, n;
  printf("Enter The FIRST TERM : ");
  scanf("%d", &a);
  printf("Enter The COMMON DIFFERENCE  : ");
  scanf("%d", &d);
  printf("Enter The N th Term : ");
  scanf("%d", &n);
  for (int i = 1; i<=n; i++) {
    printf("%d ", (a + ((i - 1) * d)));
  }
}