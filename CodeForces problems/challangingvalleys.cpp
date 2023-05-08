#include<bits/stdc++.h>
#define ll long long int
using namespace std;



int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll t;
    cin>>t;
    while(t--){
        ll n,count=0;
        cin>>n;
        vector<ll>v(n+5,0);
        for(int i=1;i<=n;i++) cin>>v[i];
        int start=1;
        int end=1;
        while(end<=n){
            while(v[end]==v[end+1]) end++;
            if((start==1||v[start-1]>v[start])&&(end==n||v[end+1]>v[end])) count++;
                start=end+1;
                end=end+1;
        }
        if(count!=1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}