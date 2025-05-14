#include <math.h>
#include <stdio.h>
int main() {
  int n;
  printf("Enter The Number : ");
  scanf("%d", &n);
  int sum = 0;
  int i = 1;
  int Sodd = 0;
  int Seven = 0;
  while (i <= n) {
    if (i % 2 != 0)
      Sodd += i;
    else
      Seven += i;
    i++;
  }
  sum = Sodd - Seven;
  if (sum > 0)
    printf("%d", sum);
  else
    printf("%d", (-sum));
  // if (n%2==0) printf("sum is %d",-n/2);
  // else printf("%d",-(n/2)+n);
}