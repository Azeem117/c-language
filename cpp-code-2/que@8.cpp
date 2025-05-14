// possible side of tri
#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter N : ";
  cin >> n;
  int m;
  cout << "ENter m : ";
  cin >> m;
  int s;
  cout << "ENter s : ";
  cin >> s;
  if ((m + n) > s && (m + s) > n && (s + n) > m)
    cout << "Can be side of triangle";
  else
    cout << "CANNOT";
}