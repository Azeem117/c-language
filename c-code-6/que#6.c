#include <stdio.h>
int main() {
  int n;
  printf("Enter The Number : ");
  scanf("%d", &n);
  if (n >= 100 && n <= 999) {
    printf("Number is Three Digit Number");
  } else {
    printf("Not 3 Digit");
  }
}