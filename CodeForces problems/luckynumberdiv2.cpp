#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
   int l,r;
   cin>>l>>r;
   int luckyno=0,ans=l;
   for(int i=l;i<=r&&i<=l+100;i++){
      int maxi=INT_MIN,mini=INT_MAX;
      int num=i;
      string s=to_string(num);
      for(int j=0;j<s.size();j++){
         maxi=max(maxi,s[j]-'0');
         mini=min(mini,s[j]-'0');
      }
      if(maxi-mini>=luckyno){
         luckyno=maxi-mini;//finding out the maximum difference.
         ans=i;//the number having max luckiness
      }
   }
   cout<<ans<<endl;
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