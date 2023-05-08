#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	ll n;
	cin>>n;
	vector<ll>v(n,0);
    map<ll,vector<ll>>mp;
	for(int i=0;i<n;i++){
	 cin>>v[i]; 
	 mp[v[i]].push_back(i+1);
	}
	bool flag=false;
	vector<ll>ans;
	for(auto &it:mp){
		if(it.second.size()==1){
			flag=true;
			break;
		}
		for(ll i=0;i<it.second.size();i++){
			if(i==0) ans.push_back(it.second[it.second.size()-1]);
			else ans.push_back(it.second[i-1]);
		}
	}
	if(flag==true) cout<<-1<<endl;
	else{
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
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