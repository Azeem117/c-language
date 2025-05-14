// greatest of three
#include <iostream>
using namespace std;
int main() {
  int a, b, c;
  cout << "Enter A B C : ";
  cin >> a;
  cin >> b;
  cin >> c;
  if (a < b && a < c)
    cout << "A is Least";
  else if (b > a && b > c)
    cout << "B is Least";
  else
    cout << "C is Least";
}