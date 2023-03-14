#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,sumneg=0,sumpos=0;
        cin>>n;
        vector<ll>a(n,0);
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++){
            if(a[i]<=0) sumneg+=a[i];
            else sumpos+=a[i];
        }
        cout<<abs(sumpos-abs(sumneg))<<endl;
    }
}