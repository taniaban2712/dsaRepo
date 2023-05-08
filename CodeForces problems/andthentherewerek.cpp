#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	ll n;
	cin>>n;
	int ans=1;
    while(ans<n){
        ans*=2;
    }
    if(ans>n) ans/=2;
    cout<<ans-1<<endl;
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