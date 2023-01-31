#include<bits/stdc++.h>
using namespace std;
int main(){
    int t{0};
    cin>>t;
    while(t--){
        int n{0},zero{0};
        cin>>n;
        for(int i=0;i<n;i++){
            int a{0};
            cin>>a;
            if(a==0){
                zero++;
            }
        }
        if(zero%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
       
    }
}