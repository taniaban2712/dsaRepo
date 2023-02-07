#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t=0;
    cin>>t;
    string s="codeforces";
    while(t--){
        char ch;
        cin>>ch;
        int flag=0;
        for(int i=0;i<s.length();i++){
            if(ch==s[i]){
                flag=1;
                break;
            }
        }
        if(flag==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}