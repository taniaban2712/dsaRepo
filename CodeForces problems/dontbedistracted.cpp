#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool flag=false;
        vector<char>m;
        m.push_back(s[0]);
        for(int i=1;i<n;i++){
            if(find(m.begin(),m.end(),s[i])!=m.end()&&s[i]!=s[i-1]){
                flag=true;
                break;
            }
            else m.push_back(s[i]);
        }
        if(flag==true) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}