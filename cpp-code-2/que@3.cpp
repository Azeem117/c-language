#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter N : ";
  cin >> n;
  if (n > 0)
    cout << n;
  else
    cout << -n;
}