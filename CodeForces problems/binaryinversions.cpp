#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll bininv(vector<ll>nums){
    ll countzero=0,sum=0;
    for(int i=nums.size()-1;i>=0;i--){
        if(nums[i]==1){
            sum+=countzero;
        }
        if(nums[i]==0) countzero++;//finding number of zeros(after one)
    }
    return sum;
}

void solve(){
        ll n,countone=0,countzero=0;
        cin>>n;
        //ll sum=0;
        vector<ll>v(n,0);
        bool flag=false;
        for(ll i=0;i<n;i++) cin>>v[i]; 
        ll ans=bininv(v);//finding no of comb initially
       // cout<<countzero<<countone<<endl;
        vector<ll>front(n,0);
        vector<ll>back(n,0);
        for(ll i=0;i<n;i++){
            if(v[i]==0){
                v[i]=1;
                ans=max(ans,bininv(v));//finding max comb when first zero is flipped
                v[i]=0;
                break;
            }
        }
        for(ll i=n-1;i>=0;i--){
            if(v[i]==1){
                v[i]=0;
                ans=max(ans, bininv(v));//finding max comb. when last one is flipped
                v[i]=1;
                break;
            }
        }
        cout<<ans<<endl;
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;//not done
    while(t--){
        solve();
    }
}