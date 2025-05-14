#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int n;
  cout << "Enter n : ";
  cin >> n;
  int l = 1;int m =0;
  for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
      if(i==j) cout << l<<" ";
      else if((i+j)%2!=0) cout<<m<<" ";
      else if((i+j)%2==0) cout<<l<<" ";
    }
    cout << endl;
  }
}
