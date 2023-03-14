#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s="";
        cin>>s;
        int n=s.length();
        char ch=' ';
        cin>>ch;
        bool flag=false;
        for(int i=0;i<n;i++){
            if(s[i]==ch&&i%2==0) flag=true;
        }
        if(flag==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}