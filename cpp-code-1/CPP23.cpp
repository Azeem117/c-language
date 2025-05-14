#include <iostream>
using namespace std;
int main() {
    float x;
    cin>>x;
    char op;
    cin>>op;
    float y;cin>>y;
    switch(op) {
        case '+' :
        cout<<x+y;break;
        case '-' :
        cout<<x-y;break;
        case '*' :
        cout<<x*y;break;
        case '/' : 
        cout<<x/y;break;
        default :
        cout<<"Invalid Command";
    }
                      
}