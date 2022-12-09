#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n{0};
        cin>>n;
        string s="";
        cin>>s;
        int count{0};
        for(int i=0;i<s.length();i++){
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                    count=0;
                    continue;
                }
                else{
                    count++;
                    if(count==4){
                        break;
                    }
                }
            }
        if(count<4){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}