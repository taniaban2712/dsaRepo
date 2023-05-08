#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	ll n;
	cin>>n;
	string s,t;
	cin>>s>>t;
	ll count=0;
	ll poss=-1,post=-1;
	for(int i=0;i<n;i++){
		if(s[i]!=t[i]){
			count++;
			if(poss==-1) poss=i;
			else post=i;
		}
	}
	if(count==2&&s[poss]==s[post]&&t[poss]==t[post]) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

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