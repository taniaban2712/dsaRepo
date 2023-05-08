#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	ll n,m;
	cin>>n>>m;
	vector<string> pb(n,""),eb(m,"");
	unordered_map<string, bool>polandball,enemyball;
	for(int i=0;i<n;i++){
	 //string s="";
	 cin>>pb[i];
	 polandball[pb[i]]=true;
	}
	for(int i=0;i<m;i++){
		//string s="";
		cin>>eb[i];
		enemyball[eb[i]]=true;
	}
	int i=0,j=0;
	while(i<n||j<m){
		
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