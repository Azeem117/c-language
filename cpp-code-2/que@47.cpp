#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int n;
  int m;
  cout << "Enter n : ";
  cin >> n;
  cout << "Enter m : ";
  cin >> m;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (i == 1 || i == n)
        cout << "*";
      else if (((i != 1) && (i != n)) && ((j == 1 || j == m)))
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }
}
