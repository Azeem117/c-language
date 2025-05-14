#include <stdio.h>
int main() {
  int ram, shyam, ajay;
  printf("Enter Ram : ");
  scanf("%d", &ram);
  printf("Enter Shyam : ");
  scanf("%d", &shyam);
  printf("Enter Ajay : ");
  scanf("%d", &ajay);
  if (ram > shyam) {
    if (shyam < ajay) {
      printf("shyam Is Youngest");
    } else { // shyam>ajay
      printf("Ajay Is Youngest");
    }
  } else { // shyam>ram
    if (ram < ajay) {
      printf("Ram Is Youngest");
    } else { // ajay<ram
      printf("Ajay Is Youngest");
    }
  }
}