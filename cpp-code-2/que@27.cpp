#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int n;
  cout << "Enter n : ";
  cin >> n;
  int sume = 0;
  int m = 0;
  int sumo = 0;
  while (n > 0) {
    m = n % 10;
    n = n / 10;
    if (m % 2 == 0)
      sume += m;
    else
      sumo += m;
  }
  cout << "Sum of Even Digits : ";
  cout << sume << endl;
  cout << "Sum Of Odd Digits : ";
  cout << sumo << endl;
}