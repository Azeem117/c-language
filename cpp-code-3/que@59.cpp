#include <iostream>
#include <math.h>
using namespace std;
int fac(int n) {
  int g = 1;
  for (int i = 1; i <= n; i++) {
    g *= i;
  }
  return g;
}
int com(int i, int j) {
  int a = fac(i);
  int b = fac(j);
  int c = fac(i - j);
  int d = a / (b * c);
  return d;
}
int main() {
  int m;
  cout << "Enter n : ";
  cin >> m;
  for (int i = 0; i <= m; i++) {

    for (int j = 0; j <= m-i-1; j++) {
      cout << " ";
    }
    for (int j = 0; j <= i; j++) {
      cout << com(i, j) << " ";
    }
    cout << endl;
  }
  return 0;
}
