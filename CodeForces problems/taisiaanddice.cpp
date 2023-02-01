#include<bits/stdc++.h>
using namespace std;
int main(){
    int t{0};
    cin>>t;
    while(t--){
        int n{0},s{0},r{0};
        cin>>n>>s>>r;
        int maxno=s-r;
        int a[n];
        for(int i=0;i<(n-1);i++){
            a[i]=r/(n-1);
        }
        for(int i=0;i<r%(n-1);i++){
            a[i]++;
        }
        a[n-1]=maxno;
        for(auto it:a){
            cout<<it<<" ";
        }
        cout<<" "<<endl;
    }
}