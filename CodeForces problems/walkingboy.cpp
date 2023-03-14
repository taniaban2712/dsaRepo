#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int count=0;
        int f=0;
        for(int i=0;i<n;){
            if(f+120<=a[i]){
                count++;
                f+=120;
            }
            else{
                f=a[i];
                i++;
            }
        }
        while(f+120<=1400){
            count++;
            f+=120;
        }
        if(count>=2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}