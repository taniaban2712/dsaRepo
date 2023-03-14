#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(int i=0;i<n;i++) cin>>v[i];
    int mx,mn,indmx,indmn;
    mx=*max_element(v.begin(),v.end());
    mn=*min_element(v.begin(),v.end());
    //indmx=find(v.begin(),v.end(),mx);
    for(int i=0;i<n;i++){
        if(v[i]==mx) indmx=i;
        else if(v[i]==mn) indmn=i;
    }
    vector<int>ans;
    ans.push_back(abs(n-1-indmx));
    ans.push_back(abs(n-1-indmn));
    ans.push_back(abs(indmx));
    ans.push_back(abs(indmn));
    //cout<<ans[0]<<ans[1]<<ans[2]<<ans[3]<<endl;
    cout<<*max_element(ans.begin(),ans.end())<<endl;
}