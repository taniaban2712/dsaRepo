#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int n;
    //vector<string>v;
    cin>>n;
    map<string, bool>mp;
    for(int i=0;i<n;i++){
        string s="";
        cin>>s;
        if(mp[s]==true) cout<<"YES"<<endl;
        else{
            mp[s]=true;
            cout<<"NO"<<endl;
        }
    }
}