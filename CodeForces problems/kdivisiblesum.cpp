#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	ll n,k;
	cin>>n>>k;
	//sum=const*k, then const=sum/k ans sum>=n so, const>=n/k
	//smaller maximum a>=sum/n and sum/n=const+n-1/n and const=n+k-1/k

	ll c=(n+k-1)/k;
	cout<<(c*k+n-1)/n<<endl;


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