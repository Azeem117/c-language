// gradew and marks
#include <iostream>
using namespace std;
int main() {
  int a;
  cout << "Enter Percentage : ";
  cin >> a;
  if (a <= 100 && a >= 81)
    cout << "Very Good";
  else if (a >= 61 && a < 81)
    cout << "Good";
  else if (a >= 41 && a < 61)
    cout << "Average";
  else if (a >= 0 && a < 40)
    cout << "Fail";
  else
    cout << "Invalid input";
}