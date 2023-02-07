#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int diff=INT_MAX;
        int sum=0;
        int n=nums.size()-1;
        for(int i=0;i<n;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int d=abs(nums[i]+nums[j]+nums[k]-target);
                if(d<diff){
                    diff=d;
                    sum=nums[i]+nums[j]+nums[k];
                }
                else if(sum>target) k--;//if the sum is greater than target then it is present in the left side of the array.
                else j++;
            }
        }
        return sum;
    }
};