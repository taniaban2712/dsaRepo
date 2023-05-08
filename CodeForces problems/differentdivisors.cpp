#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const ll N=1e7;
ll prime[N];
void sieveoferatosthenes(){
	prime[N]={0};
	for(ll i=2;i<=1e7;i++){
		if(!prime[i]){
			for(ll j=i*i;j<=1e7;j+=i){
				prime[j]=1;//finding the prime numbers till the max limit of INT
			}
		}
	}
}
void solve(){
	ll n;
	cin>>n;
	ll div1=0,div2=0;
	for(ll i=n+1;;i++){
		if(prime[i]==0){
			div1=i;//finding the prime divisor in the interval 1+n to infinity, because first divisor will have a minimum difference of n
			break;
		}
	}
	for(ll i=div1+n;;i++){
		if(prime[i]==0){
			div2=i;//the next divisor after the interval of n
			break;
		}
	}
	ll ans=div1*div2;
	cout<<ans<<'\n';
}
int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    sieveoferatosthenes();//calling the function so that the prime numbers are formed.
    ll t;
    cin>>t;
    while(t--){
    solve();
    }
}