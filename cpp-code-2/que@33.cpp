// #include <iostream>
// #include <math.h>
// using namespace std;
// int main() {
//   int n;
//   cout << "Enter n : ";
//   cin >> n;
//   for (int i = 1; i <= n; i++) {
//     int k = 65;
//     for (int j = 1; j <= n; j++) {
//       char ch = (int)k;
//       cout << ch;
//       k++;
//     }
//     cout << endl;
//   }
// }
#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int n;
  cout << "Enter n : ";
  cin >> n;
  int k = 65;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      char ch = (int)k;
      cout << ch;
    }
    k++;
    cout << endl;
  }
}