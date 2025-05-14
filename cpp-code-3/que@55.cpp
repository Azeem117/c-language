#include <iostream>
#include <math.h>
using namespace std;
int sum(int x, int y) {
  int sum = 0;
  sum = x + y;
  return sum;
}
int main() {
  int x, y;
  cout << "Enter X : ";
  cin >> x;
  cout << "Enter Y : ";
  cin >> y;
  int k = sum(x, y);     
  cout << "Sum is : " << k << endl;
}
