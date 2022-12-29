#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1="", s2="", snew="";
        int zero{0}, one{0};
        cin>>s1;
        cin>>s2;
        for(int i=0;i<s1.length();i++){
            if(s1[i]=='0'){
                zero++;
            }
            if(s2[i]=='0'){
                zero++;
            }
            if(s1[i]=='1'){
                one++;//counting the number of zeros nd ones
            }
            if(s2[i]=='1'){
                one++;
            }
            
        }
        int temp=min(zero, one);
        
        for(int i=0;i<temp;i++){
            snew+="1";
        }
        for(int i=temp;i<s1.length();i++){
            snew+="0";
        }
        cout<<snew<<endl;
    }
}