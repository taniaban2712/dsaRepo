#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string>v{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    string s,w;
    cin>>s;
    for(int i=0;i<s.length();i++){
        int ch=int(s[i]);
        ch-=97;
        w+=v[ch];
    }
    cout<<w<<endl;
}