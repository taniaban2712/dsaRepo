#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int ans=0;
    int count=0;
    while(n>0){
        n--;
        ans++;
        count++;
        if(count==m){
            n++;
            count=0;
        }
    }
    cout<<ans<<endl;
}