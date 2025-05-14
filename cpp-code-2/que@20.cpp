#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int a = 0, r = 0;
  cout << "Enter First Term : ";
  cin >> a;
  cout << "Enter Common Ratio : ";
  cin >> r;
  int l = a;
  int n;
  cout << "Enter n : ";
  cin >> n;
  for (int i = a; i <= n; i++) {
    if (i == a)
      cout << a << endl;
    else if (r > 0)
      l = (a * pow(r, i - 1));

    cout << l << endl;
  }
}