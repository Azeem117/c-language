#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int n;
  cout << "Enter n : ";
  cin >> n;

  int l = 1;
  for (int i = 1; i <= n; i++) {
    int k = n;
    for (int j = 1; j <= i; j++) {
      cout << k;
      k--;
    }

    cout << endl;
  }
}