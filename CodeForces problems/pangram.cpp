#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<int,bool>m;
    for(int i=1;i<=26;i++) m[i]=false;
    string s="";
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::toupper);
    for(int i=0;i<n;i++){
        int ch=int(s[i])-64;
        m[ch]=true;
    }
    int f=0;
    for(auto &it:m){
        if(it.second==false){
            f=1;
            break;
        }
    }
    if(f==1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}