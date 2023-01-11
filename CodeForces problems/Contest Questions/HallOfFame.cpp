#include<bits/stdc++.h>
using namespace std;
int main(){
    int t{0};
    cin>>t;
    while(t--){
        int n{0},count{0},l{0},r{0};
        string s="";
        vector<int>v;
        bool flag=false;
        cin>>n;
        cin>>s;
        for(int i=0;i<n-1;i++){
            if(s[i]=='L' && s[i+1]=='R'){
                count++;
            }
            else if(s[i]==s[i+1]){
                count=-1;
            }
        }
        if(flag==true){
            cout<<0<<endl;
        }
    }
}
