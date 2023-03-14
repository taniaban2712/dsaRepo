#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n,0);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    int count=0;
    for(auto &it:mp){
        if(it.first>it.second){
            count+=(it.first-it.second);
        }
        else if(it.first<it.second){
            count+=it.second;
        }
        else{
            continue;
        }
    }
    cout<<count<<'\n';
}