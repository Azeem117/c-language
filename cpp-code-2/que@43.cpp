#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int n;
  cout << "Enter n : ";
  cin >> n;
  for (int i = 1; i <= n; i++) {
    int l = 1;
    for (int j = 1; j <= i; j++) {
      cout << l;
      l += 2;
    }
    cout << endl;
  }
}
