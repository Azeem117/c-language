//switch statements
#include <iostream>
using namespace std;
int main() {
    float x;float y;int z;
    cout<<"Enter first Number : ";cin>>x;
    cout<<"Enter second Number : ";cin>>y;    
    cout<<"For Addition : 1 \n for Substraction : 2 \n For Multiplication : 3 \n For Division : 4"<<endl;
    cout<<"Enter Command : ";                      
    cin>>z;
    switch(z) {
        case 1 : cout<<x + y;
        break;
        case 2 : cout<<x - y;
        break;
        case 3 : cout<<x * y;
        break;
        case 4 : cout<<x / y ;
        break;
        default : cout<<"Invalid Command";
    }

                      
}
