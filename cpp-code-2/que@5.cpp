#include <iostream>
using namespace std;
int main() {
  int l, b;
  cout << "Enter L : ";
  cin >> l;
  cout << "Enter B : ";
  cin >> b;
  float a, p;
  a = 0;
  p = 0;
  a = l * b;
  p = 2 * (l + b);
  if (a > p)
    cout << "Area Is Greater";
  else if (a == p)
    cout << "EQUAL";
  else
    cout << "Parameter is greater";
}