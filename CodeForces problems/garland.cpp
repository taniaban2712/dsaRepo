#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve(){
	string s;
	cin>>s;
	unordered_map<char, ll>m;
	ll l=s.size();
	for(int i=0;i<l;i++){
		m[s[i]]++;
	}
	if(m.size()==4||m.size()==3) cout<<4<<endl;
	else if(m.size()==1) cout<<-1<<endl;
	else{
		int flag=0;
		for(auto it:m){
			if(it.second==3){
				flag=1;
				break;
			}
		}
		if(flag==1) cout<<6<<endl;
		else cout<<4<<endl;
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