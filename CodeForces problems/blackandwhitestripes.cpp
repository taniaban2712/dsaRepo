#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve(){
	ll n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	//bool flag=false;
	ll count=0;
	ll ans=INT_MAX;
	for(ll i=0;i<k;i++){
		if(s[i]=='B') count++;
	}
	for(ll i=k;i<n;i++){
		ans=min(ans,k-count);
		if(s[i-k]=='B') count--;
		if(s[i]=='B') count++;
	}
	ans=min(ans,k-count);
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