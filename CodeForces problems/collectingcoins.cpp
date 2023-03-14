#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int s=a+b+c+n;
        int x=s/3;
        if(s%3==0){
            if(x>=a&&x>=b&&x>=c){
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }     
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}