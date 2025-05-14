#include <stdio.h>
int main() {
  float a;
  printf("Enter percentage of the student  : ");
  scanf("%f", &a);
  if (a <= 100 && a >= 90) {
    printf("Excellent");
  } else if (a < 90 && a >= 80) {
    printf("Very Good");
  } else if (a < 80 && a >= 70) {
    printf("Good");
  } else if (a < 70 && a >= 60) {
    printf("Can Do Better");
  } else if (a < 60 && a >= 50) {
    printf("Average");
  } else if (a < 50 && a >= 40) {
    printf("Below Average ");
  } else if (a < 40 && a >= 0) {
    printf("Fail");
  } else {
    printf("Invalid Input");
  }
}