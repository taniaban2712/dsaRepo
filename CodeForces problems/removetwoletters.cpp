#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s="";
        cin>>s;
        unordered_map<string,bool>m;
        int count=0;
        string w="";
        for(int i=0;;i++){
            cout<<s.substr(0,3);
            //w=s.substr(0,i)+s.substr(i+2,n-1);
            if(m[w]) continue;
            else{
                m[w]=true;
                count++;
            }
            if(i>=n) break;
        }
        cout<<count<<endl;
    }
}