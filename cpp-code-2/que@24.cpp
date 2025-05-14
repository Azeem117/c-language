#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int n;
  cout << "Enter n : ";
  cin >> n;
  int min = 0;int m=0;
  while(n>0) {
      n=n/10;
    min++;

  }
  cout<<min;
}