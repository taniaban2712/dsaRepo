#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	ll n;
    cin>>n;
    vector<int>v(n,0);
    for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
    bool flag=false;
    for(int i=0;i<n-2;i++){
        if(v[i]+v[i+1]>v[i+2]){
            flag=true;
            break;
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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