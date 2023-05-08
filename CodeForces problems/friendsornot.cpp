#include<bits/stdc++.h>
#define ll long long int
using namespace std;

//not solved

//void solve(){

//}
int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll n,d;
    bool flag=true;
    cin>>n>>d;
    map<vector<string>,ll>mp;
    vector<set<string>> ans;
    while(n--){
    	string s1="",s2="";
    	cin>>s1>>s2;
    	ll txt;
    	cin>>txt;
    	if(mp.find({s1,s2})==mp.end()){
    		//cout<<"yes";
    		mp[{s1,s2}]=txt;
    	}
    	else{
    		if(abs(txt-mp[{s1,s2}])<=d&&abs(txt-mp[{s1,s2}])!=0&&flag){
    			//cout<<"yes";
    			flag=false;
    			ans.push_back({s1,s2});
    		}
    	}
    }
    cout<<ans.size()<<endl;
    for(auto it:ans){
    	for(auto i:it) cout<<i<<" ";
    		cout<<endl;
    }
}