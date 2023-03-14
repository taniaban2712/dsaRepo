#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;
        vector<int>v(n,0);
        unordered_map<int,int>m;
        for(int i=0;i<2*n;i++){
            cin>>v[i];
            sum+=v[i];
            m[v[i]]++;
        }
        bool flag=true;
        for(auto it:m){
            if(it.second>1){
                if(it.second%2!=0||it.second/2>n){
                flag=false;
                break;
            }
            }
            
        }
        if(flag==true) cout<<"No"<<endl;
        else{
            if(sum%2==0) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
}