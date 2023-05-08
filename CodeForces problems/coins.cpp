#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	ll n,k;
    cin>>n>>k;
    if((n%2)==0) cout<<"YES"<<endl;
    else if((n-k)%2==0) cout<<"YES"<<endl;
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