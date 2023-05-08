#include<bits/stdc++.h>
using namespace std;
int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>arr(n,0);
        arr[0]=nums[0];
        for(int i=1;i<n;i++){
            arr[i]=arr[i-1]+nums[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==k) count++;
            if(find(nums.begin(),nums.end(),arr[i]-k)!=nums.end()) count++;//checking if this exists.
            cout<<arr[i]-k<<endl;
            cout<<count<<" ";
        }
        cout<<endl;
        return count;
    }
int main(){
    int n;
    cin>>n;
    vector<int>nums(n,0);
    for(int i=0;i<n;i++) cin>>nums[i];
    int k;
    cin>>k;
    cout<<subarraySum(nums,k)<<endl;
}