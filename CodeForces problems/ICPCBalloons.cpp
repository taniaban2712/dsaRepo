#include<bits/stdc++.h>
using namespace std;
int main(){
    int t{0};
    cin>>t;
    while(t--){
        int n{0};
        int count{0};
        string s="";
        cin>>n;
        cin>>s;
        sort(s.begin(),s.end());
        for(int i=0;i<n;i++){
            if(s[i]==s[i+1]){
                count+=1;
            }
            else{
                count+=2;
            }
        }
        cout<<count<<endl;
    }
}