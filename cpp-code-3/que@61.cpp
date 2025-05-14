#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int x = 3;
  int y = 3;
  int *n = &x;
  cout << &x << "  " << n << endl;
  cout << *n << endl;
  cout << &n << endl;
}