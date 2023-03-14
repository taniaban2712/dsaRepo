#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<n/2+n%2<<endl;//the number of changes is n/2
        ll l=0,r=3*n-1;
        while(l<r){
            cout<<l+1<<" "<<r+1<<endl;
            l+=3;
            r-=3;
        }
    }
}