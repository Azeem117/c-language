#include <stdio.h>
int main() {
  float x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0;
  printf("Enter The Number x1 : ");
  scanf("%f", &x1);
  printf("Enter The Number y1 : ");
  scanf("%f", &y1);
  printf("Enter The Number x2 : ");
  scanf("%f", &x2);
  printf("Enter The Number y2 : ");
  scanf("%f", &y2);
  printf("Enter The Number x3 : ");
  scanf("%f", &x3);
  printf("Enter The Number y3 : ");
  scanf("%f", &y3);
  float slope21 = 0, slope32 = 0;                                                         
  slope21 = (y2 - y1) / (x2 - x1);
  slope32 = (y3 - y2) / (x3 - x2);
  if (slope21 == slope32) {
    printf("These Lies on same line");
  } else {
    printf("Do not lies on same line");
  }
}