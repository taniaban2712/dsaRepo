#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	ll n,k;
    cin>>n>>k;
    long double dis=0;
    vector<int>x(n,0);
    vector<int>y(n,0);
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    for(int i=1;i<n;i++){
        int m=(x[i]-x[i-1])*(x[i]-x[i-1])+(y[i]-y[i-1])*(y[i]-y[i-1]);
        dis+=sqrt(m);
    }
    long double ans=(dis*k)/50;
    cout<<fixed<<setprecision(9)<<ans<<endl;//set precision is used to specify the number of decimal places we need to find the correct number.
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
    //}
}