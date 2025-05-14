#include <iostream>
#include <math.h>
using namespace std;
int fac(int y) {
  int f = 0;
  if (y == 1)
    return 1;
  else
    f = y * fac(y - 1);
  return f;
}
int com(int n, int r) {
  int nfac = fac(n);
  int rfac = fac(r);
  int s = n - r;
  int nmrfac = fac(s);
  int coo = (nfac) / ((rfac) * (nmrfac));
  return coo;
}
int perm(int n,int r){
    int nfac = fac(n);
    int nmrfac = fac(n-r);
    int permu = nfac/nmrfac;
    return permu;
}
int main() {
  int n;
  cout << "Enter n : ";
  cin >> n;
  int r;
  cout << "Enter r : ";
  cin >> r;
  cout << "Combination is : " << com(n, r) << endl;
  cout<<"Permutation is : "<<perm(n,r);
  return 0;
}
