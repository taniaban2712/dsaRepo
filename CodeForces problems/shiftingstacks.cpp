#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
   ll n;
   cin>>n;
   vector<ll>st(n,0);
   for(int i=0;i<n;i++) cin>>st[i];
   for(int i=0;i<n-1;i++){
      if(st[i]>i){
         st[i+1]+=st[i]-i;
         st[i]=i;//making the value of each block as its index
      }
   }
   bool flag=false;
   for(int i=1;i<n;i++){
      if(st[i]<=st[i-1]){
         flag=true;
         break;
      }
   }
   if(!flag) cout<<"YES\n";
   else cout<<"NO\n";
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