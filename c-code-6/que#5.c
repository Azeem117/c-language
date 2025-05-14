#include <stdio.h>
int main() {
  int l, b, a, p;
  l = 0;
  b = 0;
  a = 0;
  p = 0;
  printf("Enter Length Of Rectangle : ");
  scanf("%d", &l);
  printf("Enter Breadth Of Rectangle : ");
  scanf("%d", &b);
  a = l * b;
  p = 2 * (l + b);
  if (a > p) {
    printf("Area Is Greater");
  } else if (a == p) {
    printf("Area = Parameter");
  } else {
    printf("Perimeter is Greater");
  }
}