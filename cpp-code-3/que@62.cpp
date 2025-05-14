#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int x = 12;
  int* ptr = &x;
  cout<<x<<endl;
  cout<<ptr<<endl;
  cout<<*ptr<<endl;
  *ptr = 77;
  cout<<x<<endl;
}