#include <stdio.h>
int main() {
  int a;
  printf("Enter The Number : ");
  scanf("%d", &a);
  // if(a>=0) {
  //     printf("Absolute value is : %d",a);
  // }
  // else{
  //     printf("Absolute Value is : %d",-a);

  // }
  // or what we can do is
  if (a < 0) {
    a = a * (-1);
  }
  printf("Absolute Value is : %d", a);
}