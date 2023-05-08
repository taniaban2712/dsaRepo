#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	ll n;
	cin>>n;

	vector<ll>a(n,0);
	vector<ll>b(n,0);
	for(int i=0;i<n;i++)  cin>>a[i];
	for(int i=0;i<n;i++)  cin>>b[i];


	//ll maxia=0,maxib=0;
    
    //if(maxela)
    for(int i=0;i<n;i++){
    	if(a[i]<b[i]) swap(a[i],b[i]);
    }
    ll maxela=*max_element(a.begin(),a.end());
    ll maxelb=*max_element(b.begin(),b.end());
    if(maxela==a[n-1]&&maxelb==b[n-1]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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