#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void combn(int i, int target,vector<int>&arr,vector<vector<int>>ans,vector<int>&ds){
        if(i==arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(arr[i]<=target){
        ds.push_back(arr[i]);
        combn(i+1,target-arr[i],arr,ans,ds);
        ds.pop_back();
        }
        combn(i+1,target,arr,ans,ds);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        combn(0,target,candidates,ans,ds);
        return ans;
    }
};