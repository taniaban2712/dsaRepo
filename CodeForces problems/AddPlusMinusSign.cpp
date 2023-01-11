#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t{0};
    cin>>t;
    while(t--){
        int n{0},sum{0};
        string s="";
        cin>>n;
        cin>>s;
        if(s[0]=='1'){
            sum=1;
        }
        for(int i=1; i<s.length();i++){
            if(sum==0){
                if(s[i]=='1'){
                    sum+=1;
                }
                cout<<"+";
            }
            else{
                if(s[i]=='1'){
                    sum-=1;
                    cout<<"-";
                }
                else{
                    cout<<"+";
                }
             
            }
        }
        cout<<" "<<endl;
    }
}
