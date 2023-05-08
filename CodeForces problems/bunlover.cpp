#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve(){
	ll n;
	cin>>n;
	cout<<n*n+2*n+2<<endl;
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