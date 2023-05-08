#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
   ll n,m;
   cin>>n>>m;
   ll megan=(n-1)+(m-1);//energy spent by megan
   ll stanley=min(n,m)-1+1;//due to the portal, stanley will travel the lesser distance.
   //+1 for the portal
   //-1 each time due to the destination cell
   if(n==1&&m==1) cout<<0<<endl;
   else cout<<megan+stanley<<endl;
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