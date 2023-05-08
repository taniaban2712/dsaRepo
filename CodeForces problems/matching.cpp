#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	string s="";
	cin>>s;
	ll ans=1;
	if(s[0]=='?') ans*=9;
	for(int i=1;i<s.size();i++){
		if(s[i]=='?') ans*=10;
	}
	if(s[0]=='0') cout<<0<<endl;
	else if(ans==1) cout<<1<<endl;
	else cout<<ans<<endl;
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