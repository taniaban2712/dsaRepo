#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	ll n,k;
	cin>>n>>k;
	if(n<k*k) cout<<"NO"<<endl;
	else if((n-(k-1)*(k-1))%2==1) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
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