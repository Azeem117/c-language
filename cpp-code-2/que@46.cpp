#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int n;
  cout << "Enter n : ";
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if(n/2 + 1 == i || n /2 +1 ==j) cout <<"*";
      else cout<<" ";



    }
    cout << endl;
  }
}
