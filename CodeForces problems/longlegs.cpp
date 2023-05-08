#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	ll a,b;
    cin>>a>>b;
    int ans=min(a,b)+abs(a-b);
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