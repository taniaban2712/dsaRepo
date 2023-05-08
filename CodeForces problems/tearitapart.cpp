#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve(){
	string s="";
	cin>>s;
	unordered_map<char, int>mp;
	for(int i=0i<n;i++){
		mp[s[i]]++;
	}
	char ch=*max_element(mp.begin(),mp.end());
	
	for(int i=0;i<n;i++){
		
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