#include<bits/stdc++.h>
using namespace std;
int main(){
    int t{0};
    cin>>t;
    while(t--){
        int x1{0},x2{0},y1{0},y2{0},d1{0},d2{0};
        cin>>x1>>y1>>x2>>y2;
        d1=sqrt(x1*x1+y1*y1);
        d2=sqrt(x2*x2+y2*y2);
        if(d1>d2){
            cout<<"ALEX"<<endl;
        }
        else if(d1<d2){
            cout<<"BOB"<<endl;
        }
        else{
            cout<<"EQUAL"<<endl;
        }
    }
}