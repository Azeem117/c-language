#include <stdio.h>
int main() {
  float x, y;x = 0;y=0;  
  printf("Enter The Number x : ");
  scanf("%f", &x);
  printf("Enter The Number y : ");
  scanf("%f", &y);
  if (x == 0 && y == 0) {
    printf("Point Lies On Origin");
  } else if (x == 0 && y != 0) {
    printf("Point Lies on Y-Axis");
  } else if (x != 0 && y == 0) {
    printf("Point lies on X-Axis");
  } else if (x > 0 && y > 0) {
    printf("Point lies on 1st quadrant");
  } else if (x > 0 && y < 0) {
    printf("Point Lies in 4th quadrant");
  } else if (x < 0 && y < 0) {
    printf("point lies in 3rd quadrant");
  } else if (x < 0 && y > 0) {
    printf("point lies in 2nd quadrant");
  } else {
    printf("Not Reached Till there");
  }
}