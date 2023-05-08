#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	map<char, int>mp;
	for(int i=0;i<s1.size();i++){
		mp[s1[i]]++;
	}
	
	bool flag=true;
	for(int i=0;i<s2.size();i++){
		//cout<<s2[i]<<mp[s2[i]]<<endl;
		if(s2[i]==' ') continue;
		else if(mp[s2[i]]==0){
			//cout<<"hello"<<endl;
			flag=false;
			break;
		}
		else{
			mp[s2[i]]--;
		}
	}
	if(flag) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
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