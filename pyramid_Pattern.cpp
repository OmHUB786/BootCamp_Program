#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k  = 2*n-2;//For spces
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            cout<<" ";
        }
        k = k-1;
        for(int m=1;m<=i;m++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
