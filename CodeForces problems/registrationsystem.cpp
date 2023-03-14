#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    unordered_map<string,int>mp;
    while(t--){
        string s="";
        cin>>s;
        if(mp[s]==0){
            cout<<"OK"<<endl;
            mp[s]++;
        }
        else{
            cout<<s<<mp[s]<<endl;
            mp[s]++;
        }
    }
}