#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t=0;
    cin>>t;
    while(t--){
        int n=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int flag=0;
        for(int i=0;i<n-1;i++){
            if(v[i]==v[i+1]){
                flag=1;
                break;
            }
        }
        if(flag==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}