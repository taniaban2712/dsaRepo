#include<bits/stdc++.h>
using namespace std;
int main(){
    int t{0};
    cin>>t;
    while(t--){
        int a{0},b{0},c{0};
        cin>>a>>b>>c;
        if(a*b<0||b*c<0||c*a<0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}