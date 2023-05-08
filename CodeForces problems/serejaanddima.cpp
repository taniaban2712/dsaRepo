#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n;
    cin>>n;
    vector<int>v(n,0);
    for(ll i=0;i<n;i++) cin>>v[i];
       // sort(v.begin(),v.end());
        ll seraja=0,dima=0;
    ll start=0,end=n-1,temp=0;
    while(start<=end){
        if(temp%2==0){
            if(v[start]>v[end]){
                seraja+=v[start];
                start++;
            }
            else{
                seraja+=v[end];
                end--;
            }
        }
        else{
            if(v[start]>v[end]){
                dima+=v[start];
                start++;
            }
            else{
                dima+=v[end];
                end--;
            }
        }
        temp++;
    }
    cout<<seraja<<" "<<dima<<endl;
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
   // }
}