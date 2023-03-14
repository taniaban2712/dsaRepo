#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        int x=0;
        while(x!=n){
            if(x<n){
                if(n-x<3){
                    x+=3;
                    count++;
                }
                else if(n-x<2){
                    x+=2;
                    count++;
                } 
            }
            else{
                if(x-n<3){
                    x-=3;
                    count++;
                } 
                else if(x-n<2){
                    x-=2;
                    count++;
                } 
            }
        }
        cout<<count<<endl;
    }
}