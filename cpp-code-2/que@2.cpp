#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter N : ";
  cin >> n;
  if (n % 5 == 0)
    cout << "Divisible by 5";
  else
    cout << "Not divisible by 5";
}