#include <stdio.h>
int main() {
  int a, b, c;
  printf("Enter A : ");
  scanf("%d", &a);
  printf("Enter B : ");
  scanf("%d", &b);
  printf("Enter C : ");
  scanf("%d", &c);
  // all the three numbers are distinct
  if (a > b) {
    if (a > c) {
      printf("A is Greatest\n");
    } else {
      printf("C is Greatest\n");
    }
  } else {
    if (b > c) {
      printf("B is greatest\n");
    } else {
      printf("C is Greatest\n");
    }
  }
  // ar we can use logical operators
  if (a > c && a > b) {
    printf("A Is GREATEST\n");
  }
  if (b > c && b > a) {
    printf("B is Greatest");
  }
  if (c > a && c > b) {
    printf("C is GREATEST");
  }
}