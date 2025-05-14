#include <iostream>
#include <math.h>
using namespace std;
int repeat(int x,int n) {
  if (x == n)
    return 0;
  cout << x << endl;
  repeat(x+1,n);
}
int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;
  repeat(1,n);
}