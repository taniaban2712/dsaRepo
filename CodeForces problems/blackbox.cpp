#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(4,0);
    for(int i=0;i<4;i++) cin>>v[i];
    string s="";
    cin>>s;
    int ans=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1') ans+=v[0]; 
        else if(s[i]=='2') ans+=v[1];
        else if(s[i]=='3') ans+=v[2];
        else ans+=v[3];
    }
    cout<<ans<<endl;
}