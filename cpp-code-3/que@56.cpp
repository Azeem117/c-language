//library functions
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int x;
    cout<<"Enter x : ";
    cin>>x;
    int y;
    cout<<"Enter Y : ";
    cin>>y;
    cout<<"Square root is : "<<sqrt(x)<<endl;
    cout<<"Cube root is : "<<cbrt(x)<<endl;
    cout<<min(x,y)<<endl;
    cout<<max(x,y)<<endl;
    cout<<pow(x,y)<<endl;
}