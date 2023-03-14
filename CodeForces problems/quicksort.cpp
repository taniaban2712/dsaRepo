#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n,0);
        for(int i=0;i<n;i++) cin>>v[i];

        int count=1;
        for(int i=0;i<n;i++){
            if(v[i]==count) count++;
        } 
        if(n+1==count) cout<<0<<endl;
        else{
            if((n-count+1)%k) cout<<(n-count+1)/k+1<<endl;
            else cout<<(n-count+1)/k<<endl;
        }
    }
}