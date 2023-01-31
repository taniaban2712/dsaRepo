#include<bits/stdc++.h>
using namespace std;
int main(){
    int count{0},ans{0};
    int t{0};
    cin>>t;
    while(t--){
        count=0;
     for(int i=1;i<=3;i++){
        int a{0};
        cin>>a;
        if(a==1){
            count++;
        }
    }
    if(count>=2){
        ans++;
    }
    }
    cout<<ans<<endl;
}