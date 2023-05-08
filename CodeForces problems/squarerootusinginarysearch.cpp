#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	ll n;
    cin>>n;
    int i=0,j=n,ans=0;
    while(i<j){
        int mid=(i+j)/2;
        if(mid*mid==n){
            ans=max(ans,mid);
            break;
        }
        if(mid*mid>n){
            j=mid-1;
        }
        if(mid*mid<n){
            i=mid+1;
            ans=max(ans,mid);
        }
    }
    cout<<ans<<endl;
}

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

   // ll t;
   // cin>>t;
   // while(t--){
    solve();
    //}
}