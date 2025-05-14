#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int n;
  cout << "Enter n : ";
  cin >> n;
  for (int i = 1; i <= n; i++) {
    int k = 1;
    for (int j = 1; j <= n; j++) {
      cout << k;
      k++;
    }
    cout << endl;
  }
}