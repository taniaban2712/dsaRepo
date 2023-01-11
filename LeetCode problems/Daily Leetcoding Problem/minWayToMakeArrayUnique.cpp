#include<bits/stdc++.h>
using namespace std;


int minIncrementForUnique(vector<int>& A) {
        int s = A.size();
        int res=0;
        if (s<2)  return 0;
        sort(A.begin(),A.end());        
        for (int i=1; i<s; ++i) {
            if (A[i]<=A[i-1]){
                res+=A[i-1]+1 -A[i];
                A[i]= A[i-1]+1;
            }
        }
        return res;
    }
int main(){
    int n{0};
    vector<int>v;
    for(int i=0;i<n;i++){
        int f{0};
        cin>>f;
        v.push_back(f);
    }
    cout<<minIncrementForUnique(v)<<endl;
    return 0;
}