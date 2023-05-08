#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve(){
	string s="",w="",ans="";
	cin>>s;
	for(int i=0;i<s.size();i++){
		w+=s[i];
		if(w=="."){
		 ans+='0';
		 w="";
		}
		else{
			if(w=="-."){
				ans+='1';
				w="";
			}
			else if(w=="--"){
				ans+='2';
				w="";
			}
			else continue;
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
    //}
}