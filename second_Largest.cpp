#include<bits/stdc++.h>
using namespace std;
int main(){
    int largest = INT_MIN;
    int second_largest = INT_MIN;
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>largest){
            second_largest = largest;
            largest = a[i];
        }
        else if(a[i]>second_largest && a[i]!=largest)
        {
            second_largest = a[i];
        }
    }
    cout<<second_largest<<endl;
}