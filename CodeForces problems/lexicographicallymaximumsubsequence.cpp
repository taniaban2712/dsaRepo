#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	string s="";
    cin>>s;
    map<int,int>mp;
    int n=s.size();
    vector<char>st;
    for(int i=0;i<n;i++){
        if(mp[s[i]]==0) st.push_back(s[i]);
        mp[s[i]]++;
    }
    sort(st.begin(), st.end());
    int ab=st.size()-1;
    string w="";
    int i=0;
    while(i!=n){
        cout<<s[i]<<" "<<w<<endl;
        mp[s[i]]--;
        if(s[i]==st[ab]){
            w+=s[i];    
        }
        if(mp[st[ab]]==0){
            char ch=st[ab-1];
            while(ab>=0){
                if(find(s.begin(),s.end(),ch)!=s.end()){
                    break;
                }
                else{
                    ab--;
                }
            }
            //continue;
        }
        
        i++;
    }
    cout<<w<<endl;
}

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

   // ll t;
    //cin>>t;
    //while(t--){
    solve();
    //}
}