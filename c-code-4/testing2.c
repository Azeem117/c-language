#include <stdio.h>
typedef struct employee {
  char fav;
  int id;
  float salary;
}ep;
int main() {
  ep azeem;
  azeem.fav = 'A';
  azeem.id = 108;
  azeem.salary = 25600;
  printf("%d\n", azeem.id);
  printf("%f\n", azeem.salary);
  printf("%c\n", azeem.fav);

}