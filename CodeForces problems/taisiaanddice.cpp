#include<bits/stdc++.h>
using namespace std;
int main(){
    int t{0};
    cin>>t;
    while(t--){
        int n{0},s{0},r{0};
        cin>>n>>s>>r;
        int maxno=s-r;
        vector<int>v;
        cout<<maxno<<" ";
        while(r>0&&n>1){
            if(r>maxno-1){
                r-=maxno;
                v.push_back(maxno-1);
            }
            else{
                v.push_back(r);
                r=0;
            }
        }
        for(auto it:v){
            cout<<it<<" ";
        }
        cout<<" "<<endl;
    }
}