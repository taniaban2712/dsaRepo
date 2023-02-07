#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t=0;
    cin>>t;
    while(t--){
        int n=0;
        cin>>n;
        string s="";
        cin>>s;
        unordered_map<char,int>left,right;
        for(int i=0;i<n;i++){
            right[s[i]]++;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int cond=0;
            left[s[i]]++;
            right[s[i]]--;
            for(int i=97;i<123;i++){
                char ch=i;
                cond+=min(1,left[ch])+min(1,right[ch]);
            }
            ans=max(ans,cond);
        }
        cout<<ans<<'\n';
    }
}