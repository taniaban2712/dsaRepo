#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	ll n;
	cin>>n;
	vector<int>v(n,0);
	unordered_map<int,int>m;
	for(ll i=0;i<n;i++){
	 cin>>v[i];
	 m[v[i]]++;
	}
    bool f=false;
    for(auto it:m){
    	//cout<<it.second<<endl;
    	if(n%2==0){
    		if(it.second>n/2){
    			f=true;
    			break;
    		}
    	}
    	else{
    		if(it.second>(n+1)/2){
    			f=true;
    			break;
    		}
    	}
    }
    //if any number has frequency more than half of the number then, it is not possible
   if(f==true) cout<<"NO"<<endl;
   else cout<<"YES"<<endl;
}
int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    //ll t;
   // cin>>t;
    //while(t--){
    solve();
    //}
}