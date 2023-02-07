#include<bits/stdc++.h>
using namespace std;
int main(){
    int t{0};
    cin>>t;
    while(t--){
        int n{0},count{0},l{0},r{0};
        string s="";
        bool flag=false;
        cin>>n;
        cin>>s;
        for(int i=0;i<n-1;i++){
            if(s[i]=='L'&&s[i+1]=='R'){
                count=1+i;
            }
            else if(s[i]=='R'&&s[i+1]=='L'){
                flag=true;
                break;
            }
        }
        if(count>0) cout<<count<<endl;
        else{
            if(flag==true) cout<<0<<endl;
            else cout<<-1<<endl;
        }
    }
}
