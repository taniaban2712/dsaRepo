#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	ll n;
    cin>>n;
    int i=0,j=n,ans=0;
    while(i<j){
        int mid=(i+j)/2;
        if(mid*mid<=n){
            //we are doing this to get the nearest possible integer and the square root
            //now i and j pointers will cross each other and then it will come out of the loop
            ans=max(ans,mid);//for square roots
            break;
        }
        if(mid*mid>n){
            j=mid-1;
        }
        if(mid*mid<n){
            i=mid+1;
            
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