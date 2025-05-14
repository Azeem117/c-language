#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int n;
  cout << "Enter n : ";
  cin >> n;
  int min = 0;
  for (int i = 2; i < n - 1; i++) {
    if (n % i == 0) {
      cout << "Composite";
      break;
    }
    else {
      cout<<"Prime";
      break;
    }
  }
}