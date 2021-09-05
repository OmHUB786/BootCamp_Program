#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"largest: "<<a<<endl;
        }
        else{
            cout<<"largest: "<<c<<endl;
        }
    }
    else{
        cout<<"largest: "<<b<<endl;
    }

}