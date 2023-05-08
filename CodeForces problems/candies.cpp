#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
   ll n;
   cin>>n;
   vector<ll>v;
   if(n%2==0) cout<<-1<<endl;
   else{
      while(n>1){
         if((n-1)/2%2==1){
            n--;
            n/=2;
            v.push_back(2);
         }
         else{
            n++;
            n/=2;
            v.push_back(1);
         }
      }
      cout<<v.size()<<endl;
      reverse(v.begin(),v.end());
      for(auto &it:v) cout<<it<<" ";
         cout<<endl;
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