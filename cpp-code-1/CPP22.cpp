#include <iostream>
using namespace std;
int main() {
    int x;
    cin>>x;
    char op;
    cin>>op;
    int y;cin>>y;
    if(op=='+') cout<<x+y;
    if(op=='-') cout<<x-y;
    if(op=='*') cout<<x*y;
    if(op=='/') cout<<x/y;
                      
}