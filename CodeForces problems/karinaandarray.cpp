#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve(){
	ll n;
	cin>>n;
	vector<ll>v(n,0);
	for(int i=0;i<n;i++) cin>>v[i];
	sort(v.begin(), v.end());
    cout<<max(v[0]*v[1],v[n-1]*v[n-2])<<endl;
}

int main(){
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll q;
    cin>>q;
    while(q--){
    	solve();
    }
}