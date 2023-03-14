#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s1,s2;
        cin>>s1>>s2;
        reverse(s2.begin(),s2.end());
        string newstr=s1+s2;
        int count=0;
        for(int i=0;i<(m+n-1);i++){
            if(newstr[i]==newstr[i+1]) count++;
        }
        if(count>1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}