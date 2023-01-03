#include<bits/stdc++.h>
using namespace std;



int n{0};
vector <int> a;
vector <int> subs(int i,vector<int>v,int sum){
    if(i>n && sum==2){
        return v;
    }
    v.push_back(a[i]);
    subs(i+1,v,sum+a[i]);
    v.pop_back();
    subs(i+1,v,sum+a[i]); 
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    subs(0,{},0);
}
