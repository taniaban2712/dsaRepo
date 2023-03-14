#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t,n=0;
    cin>>t;
    n=t;
    vector<string>v;
    while(t--){
        string s="";
        cin>>s;
        v.push_back(s);
    }
    int count=0;
    for(int i=0;i<n-1;i++){
        //cout<<v[i][1]
        if(v[i][1]==v[i+1][0]) count++;
        else continue;
    }
    cout<<count+1<<endl;
}