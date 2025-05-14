#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int n;
  cout << "Enter n : ";
  cin >> n;
  int min = 0;
  int m = 0;
  int j = 1;
  while (n > 0) {
    m = n % 10;
    n = n / 10;
    j *= m;
    min++;
  }
  cout << min << endl;
  cout << j << endl;
}