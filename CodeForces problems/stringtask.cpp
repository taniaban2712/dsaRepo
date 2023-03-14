#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    string w="";
    for(int i=0;i<n;i++){
        char ch=tolower(s[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='y') continue;
        else{
            w+='.';
            w+=ch;
            //cout<<w<<'\n';
        }
    }
    cout<<w<<endl;
}