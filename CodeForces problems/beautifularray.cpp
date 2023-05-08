#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
   ll n,k,b,s;
   cin>>n>>k>>b>>s;
   if(b*k!=s) cout<<-1<<endl;
   else{
      while(n>1){
         cout<<0<<" ";
         n--;
      }
      cout<<b*k<<endl;
   }
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