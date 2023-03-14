#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string>st;
        vector<string>v;
        for(int i=0;i<2*n-2;i++){
            string a="";
            cin>>a;
            v.push_back(a);
        }
        for(int i=0;i<2*n-2;i++){
            if(v[i].size()==n-1) {
                st.push_back(v[i]);
               // cout<<v[i]<<endl;
            }
        }
        string w="";
        for(int i=n-2;i>=0;i--){
            w.push_back(st[0][i]);
        } 
        //cout<<w<<endl;
        //cout<<st[1]<<endl;
        if(w==st[1])   cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
