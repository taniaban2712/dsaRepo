#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	ll n;
	cin>>n;
	vector<ll>v(n,0);
	for(int i=0;i<n;i++) cin>>v[i];
		sort(v.begin(),v.end());
	//vector<ll>pref(n+1,0);
	//pref[0]=v[0];
	ll ans=v[0];
	for(int i=1;i<n;i++){
	 //pref[i]=v[i]-v[i-1];
	 ans=max(ans,v[i]-v[i-1]);
	}
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