#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int n;
  cout << "Enter n : ";
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= n; j++) {
      cout << "*";
    }
    cout << endl;
  }
}