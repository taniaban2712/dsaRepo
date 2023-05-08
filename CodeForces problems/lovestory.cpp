#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
   string str="codeforces";
   string s="";
   cin>>s;
   ll count=0;
   for(int i=0;i<s.size();++i){
      if(s[i]!=str[i]) count++;
   }
   cout<<count<<endl;
}

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll q;
    cin>>q;
    while(q--){
    	solve();
    }
}