#include <iostream>
#include <math.h>
using namespace std;
int print(int n) {
  if (n == 1) {
    cout << 1 << endl;
    return 0;
  }
  cout << n << endl;
  print(n - 1);
}
int main() {
  int n;
  cout << "ENter n : ";
  cin >> n;
  print(n);
}