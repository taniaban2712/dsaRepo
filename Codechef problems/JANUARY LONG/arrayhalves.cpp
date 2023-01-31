#include<bits/stdc++.h>
using namespace std;
int maxim(vector<int>v,int a,int b){
    int m=INT_MIN;
    for(int i=a;i<b;i++){
        if(v[i]>m){
            m=v[i];
        }
    }
    return m;
}
int minim(vector<int>v,int a,int b){
    int n=INT_MAX;
    for(int i=a;i<b;i++){
        if(v[i]<n){
            n=v[i];
        }
    }
    return n;
}

int main(){
    int t{0};
    cin>>t;
    while(t--){
        int n{0};
        cin>>n;
        vector<int>v;
        for(int i=0;i<2*n;i++){
            int a=0;
            cin>>a;
            v.push_back(a);
        }
        int count{0};
        for(int i=0;i<v.size();i++){
             cout<<maxim(v,0,n)<<endl;
             cout<<minim(v,n,2*n)<<endl;
             if(maxim(v,0,n)<minim(v,n,2*n)){
                break;
             }
                swap(v[j],v[j+1]);
                count++;
           }
        cout<<count<<endl;
    }
}