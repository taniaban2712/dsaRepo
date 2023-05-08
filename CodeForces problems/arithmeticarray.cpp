#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
   ll n;
   cin>>n;
   vector<ll>st(n,0);
   ll sum=0;
   for(int i=0;i<n;i++){
    cin>>st[i];
    sum+=st[i];
   }
   ll k=sum-n;
   if(sum==n) cout<<0<<endl;
   else if(sum>n) cout<<sum-n<<endl;
   else cout<<1<<endl;
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