#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int n;
  cout << "Enter n : ";
  cin >> n;
  int m = 0;
  int num = 0;
  int i = 0;int sum=0;
  while (n > 0) {
    m = n % 10;
    n = n / 10;
    sum += m;
    if(i==0) num += m;
    else if(i>0)  num = num*10 + m;
    i++;
  }
  cout << num << endl;
  cout<<"Sum is : "<<sum<<endl;
}