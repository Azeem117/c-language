// gradew and marks
#include <iostream>
using namespace std;
int main() { 
  int a;
  int b;
  cout << "Enter a : ";
  cin >> a;
  char z;
  cout << "Enter Operator : ";
  cin >> z;
  cout << "Enter b : ";
  cin >> b;
  
  switch (z) {
  case '+':
    cout << "Sum is : " << a + b << endl;
    break;
  case '-':
    cout << "Subs is : " << a - b << endl;
    break;
  case '*':
    cout << "Product is : " << a * b << endl;
    break;
  case '/':
    cout << "Quotient is : " << a / b << endl;
    break;
  default:
    cout << "Invalid Operator";
  }
}