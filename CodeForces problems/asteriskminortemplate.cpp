#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a="",b="";
        cin>>a>>b;
        if(a[0]==b[0]){
            cout<<"YES"<<endl;
            cout<<a[0]<<"*"<<endl;
        }
        else if(a[a.size()-1]==b[b.size()-1]){
            cout<<"YES"<<endl;
            cout<<"*"<<a[a.size()-1]<<endl;
        }
        else{
            bool flag=false;
            for(int i=0;i<a.size()-1;i++){
                for(int j=0;j<b.size()-1;j++){
                    //cout<<a.substr(i,i+2)<<" ";
                    //cout<<b.substr(j,j+2)<<endl;
                    if(a[i]==b[j]&&a[i+1]==b[j+1]){
                        flag=true;
                        cout<<"YES"<<endl;
                        cout<<"*"<<a[i]<<a[i+1]<<"*"<<endl;
                        break;
                    }
                }
                if(flag==true) break;
            }
            if(flag==false) cout<<"NO"<<endl;
        }
    }
}