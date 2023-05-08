#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int countstr(string s, string str){
    int occ=0,pos=0;
    while ((pos = s.find(str, pos )) != string::npos) {
        occ++;
        pos += str.length();
   }
   return occ;
}
void solve(){
	string s1,s2;
    cin>>s1>>s2;
    map<string,ll>mp1;
    map<string,ll>mp2;
    string w="";
    for(int i=0;i<s1.size();i++){
        w.push_back(s1[i]);
        mp1[w]=countstr(s1,w);
    }
    w="";
    for(int i=0;i<s2.size();i++){
        w.push_back(s2[i]);
        mp2[w]=countstr(s2,w);
    }	
    bool flag=false;
    string str;
    for(auto it:mp1){
        if(find(mp2.begin(), mp2.end(),it.first)!=mp2.end()){
            str=it.second;
            flag=true;
            break;
        }
    }
    w="";
    if(flag){
        int fr=mp1[str];
        int sc=mp2[str];
        for(int i=0;i<__gcd(fr,sc)/(fr*sc);i++) w+=str;
            cout<<w<<endl;
    }
    else cout<<-1<<endl;
}
int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll q;
    cin>>q;
    while(q--){
    	solve();
    }
}