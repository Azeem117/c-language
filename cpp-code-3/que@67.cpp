#include<iostream> 
using namespace std;
int  summer(int n) {
    int sum = 0;
    if(n==0) return n;
    sum+=n;
    summer(n-1);
    cout<<sum;
}
int main() {
    int n;
    cout<<"Enter n : ";
    cin>>n;
    summer(n);
}