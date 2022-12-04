#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int counta{0}, countb{0};
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'){
                counta++;
            }
            else{
                countb++;
            }
        }
        if(counta>countb){
            cout<<countb<<endl;
        }
        else if(counta<countb){
            cout<<counta<<endl;
        }
        else{
            cout<<counta<<endl;
        }
    }
}