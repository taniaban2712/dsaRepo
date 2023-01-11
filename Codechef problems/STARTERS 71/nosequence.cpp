#include<bits/stdc++.h>
using namespace std;
int main(){
    int t{0};
    cin>>t;
    while(t--){
        int n{0},k{0},s{0};
        vector<int>v;
        cin>>n>>k>>s;
        for(int i=0;i<n;i++){
            if(s-1*pow(k,i)>0){
                v.push_back(1);
            }
            else if(s-0*pow(k,i)>0){
                v.push_back(0);
            }
            else if(s+1*pow(k,i)>0){
                v.push_back(-1);
            }
            else{
                continue;
            }
            }
        
        for(auto it:v){
            cout<<it<<endl;
        }
    }
}
