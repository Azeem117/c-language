#include <iostream>
#include <math.h>
using namespace std;
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
int main() {
  int x;
  int y;
  cout << "Enter X : ";
  cin >> x;
  cout << "Enter Y : ";
  cin >> y;
  swap(&x, &y);
  cout << x << " " << y << endl;
}