#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	ll n, x;
	cin>>n>>x;
	vector<ll>v(n,0);
	for(int i=0;i<n;i++) cin>>v[i];
	vector<pair<ll,ll>> p;
    for(int i=0;i<n;i++){
    	p.push_back({v[i]-x,v[i]+x});//the range within which v must lie
    }
    ll prevL=p[0].first,prevR=p[0].second;
    ll ans=0;
    for(int i=1;i<n;i++){
    	if(p[i].first>prevR||p[i].second<prevL){//if the value is out of range
    		prevL=p[i].first;//with help of number line
    		prevR=p[i].second;
    		ans++;
    	}
    	else{
    		prevL=max(prevL,p[i].first);
    		prevR=min(prevR,p[i].second);
    	}
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