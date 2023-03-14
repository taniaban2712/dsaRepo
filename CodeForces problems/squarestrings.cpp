#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
    int n{0};
    cin>>n;
    while(n--){
        string s="";
        cin>>s;
        if(s.size()%2==1) cout<<"NO"<<'\n';
        else{
            if(s.substr(0,s.size()/2)==s.substr(s.size()/2,s.size()-1)) cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
        }
    }
}