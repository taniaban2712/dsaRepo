#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector<ll> a(200005,0);
int main(){
    int n,k;
    cin>>n>>k;
    vector<ll> arr(n,0);
    for(ll i=0;i<n;i++) cin>>arr[i];
    a[0]=arr[0];
    for(ll i=1;i<=n;i++) a[i]=a[i-1]+arr[i];//prefix sum
    ll count=0;
    for(ll i=0;i<n;i++){
        if(a[i]==k) count++;
        if(find(arr.begin(),arr.end(),a[i]-k)!=arr.end()) count++;
    }
    cout<<count<<endl;
}