#include <stdio.h>
int main() {
  int a;
  printf("Enter The Number : ");
  scanf("%d", &a);
  //   if (a % 5 == 0 || a % 3 == 0) {
  //     if (a % 15 != 0) {
  //       printf("DIV by 3 or 5 but not by 15");
  //     }
  if (a % 15 != 0 &&( a % 3 == 0 || a % 5 == 0)) {
    printf("DIV by 3 or 5 but not by 15");
  } else {
    printf("Div By 3 and 5 and 15");
  }
}