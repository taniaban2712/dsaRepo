#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	ll n;
    cin>>n;
	vector<int>v(n,0);
    ll i=0,j=0, sum=0,maxsum=0;
    while(j<n){
    	sum+=v[j];//adding the element from the front.
    	if(j-i+1==k) maxsum=max(maxsum,sum);
    	if(j-i+1>k){
    		sum-=arr[i];//reducing the element from one side
    		i++;
    		maxsum=max(sum,maxsum);
    	}
    	j++;//incrementing j for the next iteration
    }
}

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    //ll t;
    //cin>>t;
    //while(t--){
    solve();
   // }
}