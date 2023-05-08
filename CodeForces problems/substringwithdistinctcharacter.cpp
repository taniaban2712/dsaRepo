#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool check(vector<int>a){
	for(auto it:v){
		if(it>1) return false;
	}
	return true;
}
void solve(){
	string temp="";
	vector<int>count(26,0);
	ll j=0,i=0,count=0;
	while(j<n){
		count[s[j]-'a']++;
		temp+=s[j];
		if(j-i+1==k){
			if(check(count)) ans++;
		}
	}
	cout<<ans<<endl;
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