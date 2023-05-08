#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	ll n;
	cin>>n;
	vector<ll>v(n,0),suffixsum(n,0);
	for(int i=0;i<n;i++) cin>>v[i];
	
    suffixsum[n-1]=v[n-1];
    ll ans=suffixsum[n-1];
    for(int i=n-2;i>=0;i--){
    	suffixsum[i]=suffixsum[i+1]+v[i];
    	ans=max(ans,suffixsum[i]);//the maximum will show
    }
    cout<<ans<<endl;
}
int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll t;
    cin>>t;
    while(t--){
    solve();
    }
}