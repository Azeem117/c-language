// gradew and marks
#include <iostream>
using namespace std;
int main() {
  int a;
  int b;
  cout << "Enter X coordinate : ";
  cin >> a;
  cout << "Enter Y Coordinate : ";
  cin >> b;
  if (a < 0 && b < 00)
    cout << "3 QUADRANT";
  else if (a > 0 && b > 0)
    cout << "1 QUADRANT";
  else if (a < 0 && b > 0)
    cout << "2 QUADRANT";
  else if (a > 0 && b < 0)
    cout << "4 QUADRANT";
  else if (a == 0 && b != 0)
    cout << "Point lies on y axis";
  else if ((a != 0 && b == 0))
    cout << "Point lies on x axis ";
  else if (a == 0 && b == 0)
    cout << "Point lies on origin ";
}
