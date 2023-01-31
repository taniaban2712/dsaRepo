#include<bits/stdc++.h>
#include<iostream>
using  namespace std;
int main(){
    int t{0};
    cin>>t;
    while(t--){
        int n{0},m{0},k{0};
        bool flag=false;
        cin>>n>>m>>k;
        vector<int>v;
        for(int i=0;i<m;i++){
            int num{0};
            cin>>num;
            v.push_back(num);
        }
        for(int i=0;i<m;i++){
            if(v[i]==v[i+k]){
                flag=true;
                break;
            }
        }
        if(flag==true){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}