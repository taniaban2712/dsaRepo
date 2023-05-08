#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	ll n;
    cin>>n;
    string s;
    cin>>s;
    map<char,ll>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    bool flag=true;
    for(auto &it:mp){
        //cout<<it.first<<" "<<it.second<<endl;
        if(it.second%n!=0){
           // cout<<"yes"<<endl;
            flag=false;
            break;
        }
    }
    if(flag&&n<=s.size()){
        string w="";
        for(auto &it:mp){
            ll p=0;
            while(p<(it.second/n)){//least number of repitations of the character
                w+=it.first;
                p++;
            }
        }
        while(n--) cout<<w;
    }
    else cout<<-1<<endl;
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
    return 0;
    //}
}