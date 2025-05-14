#include <stdio.h>
int main() {
  int a, b, c;
  printf("Enter A : ");
  scanf("%d", &a);
  printf("Enter B : ");
  scanf("%d", &b);
  printf("Enter C : ");
  scanf("%d", &c);
  if (a < b + c && b < a + c && c < a + b) {
    printf("Valid Triangle");
  } else {
    printf("Cannot be The Sides Of A Triangle");
  }
}