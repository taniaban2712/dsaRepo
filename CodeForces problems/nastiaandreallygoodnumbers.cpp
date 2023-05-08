#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	ll a,b;
	cin>>a>>b;
	if(b==1) cout<<"NO"<<endl;
	else{
		cout<<"YES"<<endl;
		cout<<a<<" "<<a*b<<" "<<a*(b+1)<<endl;
	}
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