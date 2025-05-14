#include <iostream>
#include <math.h>
using namespace std;
void swap(int x, int y) {
  int t = 0;
  t = x;
  x = y;
  y = t;
  cout << "After swap" << endl;
  cout << x << " " << y << endl;
}

int main() {
  int m, n;
  cout << "Enter m : ";
  cin >> m;
  cout << "Enter n : ";
  cin >> n;
  swap(m, n);
}
///////////////////////////////////////////////////////////
// #include <iostream>
// #include <math.h>
// using namespace std;

// int main() {
//   int m, n;
//   cout << "Enter m : ";
//   cin >> m;
//   cout << "Enter n : ";
//   cin >> n;
//   m = m + n;
//   n = m - n;
//   m = m - n;
//   cout << m << " " << n;
// }
//////////////////////////////////////////////////////////////
