#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve(){
	ll n,m,k;
    cin>>n>>m>>k;
    ll each=n/k;
    if(m<=each) cout<<m<<endl;
    else{
        int rem=m-each;
        if(rem%(k-1)==0)  cout<<each-(rem/(k-1))<<endl;
        else{
           cout<<each-(rem/(k-1))-1<<endl; 
        }
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