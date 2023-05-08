#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
   ll n;
   cin>>n;
   vector<ll>v(n,0);
   for(int i=0;i<n;i++) cin>>v[i];
   ll j=0,count=0,maxcount=0;
   bool flag=false;
   while(j<n){
      if(v[j]==0) count++;
      else{
         flag=true;
         maxcount=max(maxcount,count);
         count=0;  
      }
      if(count>maxcount) maxcount=count;
      j++;
      //cout<<count<<endl;
   }
   if(!flag) cout<<count<<endl;
   else cout<<maxcount<<endl;
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