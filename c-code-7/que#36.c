#include <stdio.h>
#include <math.h>
int main() {
  int n;
  printf("Enter The Number : ");
  scanf("%d", &n);
  int i = 0;
  int temp = n;
  int m = 0;
  int sum = 0;
  while (n > 0) {
    m = n % 10;
    n = n / 10;
    sum = sum + pow(m, 3);
  }
  if (sum == temp)
    printf("ARm");
  else
    printf("Not");
}