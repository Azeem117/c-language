#include <stdio.h>
int main() {
  int n;
  printf("Enter the Number : ");
  scanf("%d", &n);
  if (n % 3 == 0 && n % 5 == 0) {
    printf("Number Is Divisible By 3 And 5");
  } else {
    printf("Number Is Not Divisible By 3 And 5");
  }
  // if(n%3==0 || n%5==0) {
  //     printf("Number Is Divisible By 3 or 5");
  // }
  // else {
  //     printf("Number Is Not Divisible By 3 or 5");
  // }
}