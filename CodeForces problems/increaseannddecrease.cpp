#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve(){
	ll n;
	cin>>n;
	vector<ll>v(n,0);
	for(int i=0;i<n;i++) cin>>v[i];
	ll sum=0;
    //1,4,1=2,3,1=2,2,2--->sum%n==0
    //1,2=2,1--->num%n!=0
    for(int i=0;i<n;i++) sum+=v[i];
    if(sum%n) cout<<n-1<<endl;
    else cout<<n<<endl;
}
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    //ll t;
    //cin>>t;
    //while(t--){
    	solve();
    //}
}