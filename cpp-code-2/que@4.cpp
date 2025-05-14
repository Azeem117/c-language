#include <iostream>
using namespace std;
int main() {
  int cp, sp;
  cout << "Enter selling price  : ";
  cin >> sp;
  cout << "Enter cost price  : ";
  cin >> cp;
  if (sp > cp)
    cout << "profit is : " << sp - cp << endl;
  else if (cp == sp)
    cout << "no profit no loss" << endl;
  else
    cout << "loss is : " << cp - sp << endl;
}