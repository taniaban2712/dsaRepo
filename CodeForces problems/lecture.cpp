#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	ll n,m;
	cin>>n>>m;
	unordered_map<string,string>mp;
	for(int i=0;i<m;i++){
		string s1="",s2="";
		cin>>s1>>s2;
		if(s1.size()>s2.size()){
		 mp[s1]=s2;
		 mp[s2]=s2;
		}
		else if(s1.size()<s2.size()){
		 mp[s2]=s1;
		 mp[s1]=s1;
		}
		else{
		 mp[s1]=s1;
		 mp[s2]=s2;
		}
	}
	
	string w="";
	for(int i=0;i<n;i++){
		string s="";
		cin>>s;
		w+=mp[s]+" ";
	}
	cout<<w<<endl;
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