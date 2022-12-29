#include<bits/stdc++.h>
using namespace std;
int main(){
    int q{0};
    cin>>q;
    while(q--){
        string s="", srev="";
        cin>>s;
        for(int i=s.length()-1;i>=0;i--){
            srev+=s[i];
        }
        int flag{1};
        for(int i=0;i<s.length()-1;i++){
            int diff=int(s[i+1])-int(s[i]);
            int diffrev=int(srev[i+1])-int(srev[i]);
            if(diff!=diffrev){
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout<<"Funny"<<endl;
        }
        else{
            cout<<"Not Funny"<<endl;
        }
    }
}