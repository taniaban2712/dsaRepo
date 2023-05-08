#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n;
    cin>>n;
	vector<int>v(n,0);
    ll sum=0,maxsum=0;
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n;i++){
        sum+=v[i];
        if(sum>maxsum) maxsum=sum;
        if(sum<0) sum=0;
        //cout<<maxsum<<" "<<sum<<" "<<endl;
    }
    cout<<maxsum<<endl;
    
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