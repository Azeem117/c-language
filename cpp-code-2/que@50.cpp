#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int n;
  cout << "Enter n : ";
  cin >> n;int k=n;
  for (int i = 1; i <= n; i++) {
    for(int j=k;j>0;j--) {
        cout<<" ";
    }
    k--;
    int b =1;
    for(int l=1;l<=i;l++) {
      cout<<b;
      b++;
    }

    cout << endl;
  }
}
