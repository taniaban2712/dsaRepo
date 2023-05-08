#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	ll n,ind=0;
	cin>>n;
	vector<int>v(n-1,0);
	
	for(ll i=0;i<n-1;i++) cin>>v[i];
	vector<int>ans(n,0);
    ans[0]=v[0];
    for(int i=1;i<n;i++){
    	ans[i]=min(v[i],v[i-1]);
    }
    ans[n-1]=v[n-2];
    for(auto &it:ans) cout<<it<<" ";
    		cout<<" "<<endl;
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