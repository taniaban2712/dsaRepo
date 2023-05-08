#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	ll p,a,b,c;
	cin>>p>>a>>b>>c;
	ll aswim=0,bswim=0,cswim=0;
	if(p%a!=0){
		if(p>a) aswim=a-(p%a);
		else aswim=a-p;
	}
	//else aswim=p%a;
	if(p%b!=0){
	   if(p>b) bswim=b-(p%b);
	   else bswim=b-p;
	}
	//else bswim=p%b;
	if(p%c!=0){
	   if(p>c) cswim=c-(p%c);
	   else cswim=c-p;
	}
	//else aswim=p%c;
	
	cout<<min(aswim,min(bswim,cswim))<<endl;
}

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll t;
    cin>>t;
    while(t--){
    solve();
    }
}