#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	string s="";
	cin>>s;
	string w="hello",ans="";
	ll count=0;
	for(int i=0;i<s.size();i++){
		if(s[i]==w[count]){
			ans+=s[i];
			count++;
		}
	}
	//cout<<ans<<endl;
	if(ans=="hello") cout<<"YES"<<endl;
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
   // }
}