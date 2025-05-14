#include <iostream>
using namespace std;
int main() {
  int a, d;
  cout << "Enter First Term : ";
  cin >> a;
  cout << "Enter Commom Difference : ";
  cin >> d;
  int n;
  cout << "Enter n : ";
  cin >> n;
  for (int i = 1; i <= n; i++) {
    int l=0;
    l = (a + ((i - 1) * d));
    cout<<l<<endl;
  }
}