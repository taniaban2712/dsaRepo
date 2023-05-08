#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	string s;
    cin>>s;
    int count=0;
    string ans="";
    for(int i=0;i<s.size();i++){
        ans+=s[i];
        //cout<<ans<<" "<<s[i]<<endl;
        if(ans=="^__"){
             count++;
             ans="";
        }
        if(ans=="_^"){
             count++; 
             ans="";
        }
        if(ans=="__"){
             count+=2; 
             ans="";
        }
        if(ans=="^_^") ans="^";
        if(ans=="^^") ans="";
       
    }
    cout<<count<<endl;
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