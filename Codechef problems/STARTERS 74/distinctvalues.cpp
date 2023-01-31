#include<bits/stdc++.h>
using namespace std;
vector<int> solve(int i,int diff,vector<int>&ds,vector<int>&num){
    if(i==num.size()){
        return ds;
    }
    ds.push_back(num[i]);
    solve(i+1,diff,ds,num);
    ds.pop_back();
    solve(i+1,diff,ds,num);
}
int main(){
    int t{0};
    cin>>t;
    while(t--){
       
    }
}