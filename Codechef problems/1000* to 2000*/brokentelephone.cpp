#include<bits/stdc++.h>
using namespace std;
int main(){
    int t{0};
    cin>>t;
    while(t--){
        int n{0};
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int a{0};
            cin>>a;
            v.push_back(a);
        }
        int count{0};
        for(int i=0;i<n;i++){
           if(i>0&&i<n-1){
              if(v[i]!=v[i-1]||v[i]!=v[i+1]){
                  count++;
              }
           }
        }
        if(v[n-1]!=v[n-2]){
            count++;
        }
        if(v[0]!=v[1]){
            count++;
        }
        cout<<count<<endl;
    }
}