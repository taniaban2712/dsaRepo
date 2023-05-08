#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1="", s2="";
    cin>>s1>>s2;
    int l1=s1.size(),l2=s2.size();
    if(l1!=l2){
        cout<<"NO"<<endl;
        return 0;
    }
    bool flag=false;
    unordered_map<char,int>m;
    for(int i=0;i<l1;i++){
        m[s1[i]]=1;
    }
    for(int i=0;i<l2;i++){
        if(m[s2[i]]!=1){
            flag=true;
            break;
        }
    }
    if(flag==true){
        cout<<"NO"<<endl;
        return 0;
    }
    unordered_map<int,char>m2;
    for(int i=0;i<l1;i++){
        m2[i]=s1[i];
    }
    int count=0;
    for(int i=0;i<l2;i++){
        if(m2[i]!=s2[i]) count++;
    }
    if(count==2){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}