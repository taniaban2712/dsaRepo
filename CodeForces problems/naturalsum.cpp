#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	ll n;
    cin>>n;
    vector<int>pref(n+2,0);
    pref[0]=0;
    for(int i=1;i<=n;i++){
        pref[i]=pref[i-1]+i;
    }
    int start=0,low=0;
}

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    //ll t;
    //cin>>t;
   // while(t--){
    solve();
    //}
}