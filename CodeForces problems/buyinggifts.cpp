#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n,0);
        vector<int>b(n,0);
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i];
        }
        int mxa=*max_element(a.begin(),a.end()),mxb=*max_element(b.begin(),b.end());
        int indmxa=0,indmxb=0;
        for(int i=0;i<n;i++){
            if(mxa==a[i]) indmxa=i;
            if(mxb==b[i]) indmxb=i;
        } 
        if(indmxa!=indmxb) cout<<abs(mxa-mxb)<<endl;
        else{
            if(mxa<mxb){
                int diff=INT_MAX;
                for(int i=0;i<n;i++){
                    if(abs(b[i]-mxa)<diff){
                        diff=abs(b[i]-mxa);
                        mxb=b[i];
                    }
                }
            }
            else{
                int diff2=INT_MAX;
                for(int i=0;i<n;i++){
                    if(abs(a[i]-mxb)<diff2){
                        diff2=abs(a[i]-mxb);
                        mxa=a[i];
                    }
                }
            }
            cout<<abs(mxa-mxb)<<endl;
            
        }       
    }
}