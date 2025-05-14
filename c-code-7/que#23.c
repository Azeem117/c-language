#include <stdio.h>
int main() {
  int a, d, n;
  printf("Enter The FIRST TERM : ");
  scanf("%d", &a);
  printf("Enter The COMMON DIFFERENCE  : ");
  scanf("%d", &d);
  int b = 0;
  for (int i = 1; i <= n; i++) {
    b = (a + ((i - 1) * d));
    if (b <= 0)
      break;
    printf("%d ", b);
  }
}