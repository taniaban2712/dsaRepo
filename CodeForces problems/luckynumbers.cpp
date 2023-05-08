#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
   ll n;
   cin>>n;
   ll sum=1;
   for(int i=1;i<=n+1;i++){
      sum*=2;
   }
   //cout<<pow(2,n+1)<<endl;
   cout<<sum-2<<endl;
}

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    //ll q;
    //cin>>q;
    //while(q--){
    	solve();
    //}
}