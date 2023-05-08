#include<bits/stdc++.h>
#define ll long long int
using namespace std;

//couldnt solve
void solve(){
	ll n;
	cin>>n;
	vector<ll>v(n,0);
	for(int i=0;i<n;i++) cin>>v[i];
		ll count=1;
	vector<ll>ans;
    for(int i=1;i<=n;i++){
    	if(i!=n&&v[i]==v[i-1]) count++;
    	else{
    		ans.push_back(count);
    		count=1;
    	}
    }
    ll p=INT_MAX,q=INT_MIN;
    for(int i=1;i<ans.size();i++){
    	p=min(ans[i],ans[i-1]);
    	q=max(q,p);
    }
	cout<<q*2<<endl;
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
   // }
}