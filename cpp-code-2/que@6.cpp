// three digit or not

#include<iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter N : ";
  cin >> n;
  if (n > 99 && n < 1000)
    cout << "THREE DIGIT";
  else
    cout << "Not THree DIGIT";
}