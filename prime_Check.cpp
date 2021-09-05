#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int flag = 0;
    if(n==1){
        cout<<"not prime"<<endl;
    }
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            cout<<"Not prime"<<endl;
            flag = 1;
            break;
        }
    }
    if(flag==0){
        cout<<"Prime No"<<endl;
    }
}