#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Before swapping"<<" "<<a<<" "<<b<<endl;
    int temp = a;
    a=b;
    b=temp;
    cout<<"After swapping"<<" "<<a<<" "<<b<<endl;
}