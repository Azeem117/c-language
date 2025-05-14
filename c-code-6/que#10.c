#include <stdio.h>
int main() {
  int a, b, c, d;
  printf("Enter A : ");
  scanf("%d", &a);
  printf("Enter B : ");
  scanf("%d", &b);
  printf("Enter C : ");
  scanf("%d", &c);
  printf("Enter D : ");
  scanf("%d", &d);
  // all the three numbers are distinct
  if (a > c && a > b && a > d) {
    printf("A Is GREATEST\n");
  }
  if (b > c && b > a && b > d) {
    printf("B is Greatest");
  }
  if (c > a && c > b && c > d) {
    printf("C is GREATEST");
  }
  if (d > a && d > b && d > c) {
    printf("D is Greatest");
  }
}