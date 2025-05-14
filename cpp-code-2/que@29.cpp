// #include <iostream>
// #include <math.h>
// using namespace std;
// int main() {
//   int n;
//   cout << "Enter n : ";
//   cin >> n;int fac =1;
//   for(int i = 1 ;i<=n;i++) {
//     fac *= i;
//   }
//   cout<<"Factorial is : "<<fac<<endl;
// }
// factorial of first n numbers
#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int n;
  cout << "Enter n : ";
  cin >> n;
  int fac = 1;
  for (int i = 1; i <= n; i++) {
    fac *= i;
    cout << "Factorial is :  " << fac << endl;
  }
}
