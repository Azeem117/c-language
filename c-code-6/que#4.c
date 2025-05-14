#include <stdio.h>
int main() {
  int sp, cp, p, l;
  sp = 0;
  cp = 0;
  p = 0;
  l = 0;
  printf("Enter Selling Price : ");
  scanf("%d", &sp);
  printf("Enter Cost Price : ");
  scanf("%d", &cp);
  if (sp > cp) {
    p = sp - cp;
    printf("Profit is : %d", p);
  } else if (sp == cp) {
    printf("NO profit No Loss");
  } else {
    l = cp - sp;
    printf("LOSS is : %d", l);
  }
}