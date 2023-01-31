#include<bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>&nums){
    map<int,bool>m;
    bool flag=false;
    for(int i=0;i<nums.size();i++){
        if(m[nums[i]]==true){
            flag=true;
            break;
        }
        else{
            m[nums[i]]=true;
        }
    }
    if(flag==true){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a{0};
        cin>>a;
        v.push_back(a);
    }
    cout<<containsDuplicate(v)<<endl;
    
}