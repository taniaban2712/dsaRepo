#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve(){
	ll n,t;
	cin>>n>>t;
	vector<ll>a(n,0),b(n,0);
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) cin>>b[i];
	unordered_map<ll,bool>mp;
    //ll sec=0;
    bool flag=false;
    ll ans=0,ind=0;
	for(int i=0;i<n;i++){
		if(a[i]<=t-i){
			flag=true;
			if(ans<b[i]){
				ans=b[i];
				ind=i+1;
			}
		}
	}
	if(flag) cout<<ind<<endl;
	else cout<<-1<<endl;
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