//nested if else
#include <iostream>
using namespace std;
int main() {
    int a , b , c;
    //a>b and b>c then a>c means a is greatest
    cout<<"Enter First number : ";
    cin>>a;
    cout<<"Enter Second Number : ";
    cin>>b;
    cout<<"Enter third number  : ";
    cin>>c;
    if(a>b) {//b can never be the greatest
        if (a>c) {
            cout<<"A is greatest";
        }
        else {//c>a
            cout<<"C is Greatest";
        }
    }
    else{//b>a
        if(b>c) {
            cout<<"B is Greatest";
        }
        else {//b<c
            cout<<"C is Greatest";
        }
    }
}