#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>v(n+m);
        for(int i=0;i<n;i++){
            v.push_back(nums1[i]);
        }
        for(int i=n;i<n+m;i++){
            v.push_back(nums2[i-n]);
        }
        for(int i=0;i<n+m-1;i++){
            int maxi=i;
            for(int j=i;j<n+m;j++){
                if(v[j]>v[maxi]){
                    maxi=j;
                }
            }
            int temp=v[maxi];
            v[maxi]=v[i];
            v[i]=temp;
        }
        for(auto it:v){
            cout<<it;
        }
        cout<<" "<<endl;
    }
    int main(){
        vector<int>nums1;
        vector<int>nums2;
        int n{0},m{0};
        cin>>n>>m;
        for(int i=0;i<n;i++){
            int a{0};
            cin>>a;
            nums1.push_back(a);
        }
        for(int i=0;i<m;i++){
            int a{0};
            cin>>a;
            nums2.push_back(a);
        }
        merge(nums1,n,nums2,m);
    }