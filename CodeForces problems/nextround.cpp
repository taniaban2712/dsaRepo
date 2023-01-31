#include<bits/stdc++.h>
using namespace std;
int main(){
    int n{0},k{0};
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a{0};
        cin>>a;
        v.push_back(a);
    }
    int m=v[k-1];
    int count{0};
    for(int i=0;i<n;i++){
        if(!(v[i]>0)){
            break;
        }
        if(!(v[i]>=m)){
            break;
        }
        count++;
    }
    cout<<count<<endl;
}

