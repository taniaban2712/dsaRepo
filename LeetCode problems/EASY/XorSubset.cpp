#include<bits/stdc++.h>
using namespace std;

int sum{0};
    void subsetform(int i,vector<vector<int>>& ans, vector<int>& ds, vector<int>&arr){
        if(i==arr.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(arr[i]);
        subsetform(i+1,ans,ds,arr);
        ds.pop_back();
        subsetform(i+1,ans,ds,arr);
    }
int subsetXORSum(vector<int>& nums) {
        vector<int>ds;
        int sum{0};
        vector<vector<int>>ans;
        subsetform(0,ans,ds,nums);
        for(auto it:ans){
            int x{0};
            for(auto j:it){
                x=x^j;
            }
            sum+=x;
        }
        return sum;
    }