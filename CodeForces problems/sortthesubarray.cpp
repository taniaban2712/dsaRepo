#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve(){
	ll n;
	cin>>n;
	vector<ll> a(n,0),b(n,0);
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) cin>>b[i];
	int l=0,r=n-1;
    //checking the point where there is a difference between the sorted and unsorted array
    while(a[l]==b[l]) l++;
    while(a[r]==b[r]) r--;
    //finding out where there is discrepancy(doesnt satisfy the sorted order)
    while(l>0 && b[l-1]<=b[l]) l--;
    while(r<n-1&&b[r+1]>=b[r]) r++;
    cout<<l+1<<" "<<r+1<<endl;
    
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