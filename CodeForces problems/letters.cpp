#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
         ll n,m;
         cin>>n>>m;
         vector<ll>a(n,0);
         vector<ll>b(n,0);
         for(ll i=0;i<n;i++) cin>>a[i];
         b[0]=a[0];
         for(ll i=1;i<n;i++){
           b[i]=b[i-1]+a[i];//prefix sum
         }
         ll x;
         ll room=0,dorm=0;
         for(ll i=0;i<m;i++){
            cin>>x;
            while(a[dorm]<x-room){
               room+=a[dorm];
               dorm++;
            }
            cout<<dorm+1<<" "<<x-room<<endl;
         }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

   solve();
}