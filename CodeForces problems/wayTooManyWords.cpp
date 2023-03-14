#include<bits/stdc++.h>
using namespace std;

int main(){
    int t{0};
    cin>>t;
    while(t--){
        string s="",w="";
        cin>>s;
        int l=s.length();
        if(l>10){
            w=s[0]+to_string(l-2)+s[l-1];
        }
        else{
            w=s;
        }
        cout<<w<<endl;
    }
    return 0;
}