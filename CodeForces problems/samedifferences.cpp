#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll res=0;
        //the aj-ai==j-i so aj-j==ai-i
        for(ll i=0;i<n;i++) cin>>a[i];
        unordered_map<ll,ll>m;
        //int count=0, i=0;
        for(ll i=1;i<=n;i++) m[a[i-1]-i]++;
        for(auto it:m) res+=((it.second)*(it.second-1))/2;
        cout<<res<<endl;
    }
}