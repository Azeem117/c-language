// greatest of three
#include <iostream>
using namespace std;
int main() {
  int a;
  cout << "Enter N : ";
  cin >> a;
  if ((a % 5 == 0 || a % 3 == 0) && (a % 15 != 0)) {
    cout << "Div by 3 , 5 but not 15";
  }
}