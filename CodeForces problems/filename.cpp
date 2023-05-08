#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0,ans=0;
    cin>>n;
    string s="";
    cin>>s;
    for(int i=0;i<n;i++){
        if(count==0&&s[i]=='x') count++;
        else if(s[i]==s[i-1]&&s[i]=='x'&&s[i-1]=='x'){
            count++;
        }
        else{
            if(count>=3){
                ans+=count-2;
            }
            count=0;
        }
        //cout<<count<<endl;
    }
    if(count>=3) ans+=count-2;
    cout<<ans<<endl;
}