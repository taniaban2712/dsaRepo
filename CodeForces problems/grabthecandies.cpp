#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n,0);
        ll sumeven=0,sumodd=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2==0) sumeven+=v[i];
            else sumodd+=v[i];
        }
        if(sumeven>sumodd) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}