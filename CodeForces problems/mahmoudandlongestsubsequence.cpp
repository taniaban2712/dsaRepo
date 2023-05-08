#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	string a,b;
	cin>>a>>b;
	if(a==b) cout<<-1<<endl;
	//the bigger string can never be the subsequence of the smaller one
	else cout<<max(a.size(),b.size())<<endl;
}

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

   // ll t;
   // cin>>t;
    //while(t--){
    solve();
    //}
}