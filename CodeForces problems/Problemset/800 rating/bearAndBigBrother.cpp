#include<bits/stdc++.h>
using namespace std;
int main(){
    int a{0},b{0},c{0};
    cin>>a>>b;
    while(true){
        a*=3;
        b*=2;
        c++;
        if(a>b){
            break;
        }
        
    }
    cout<<c<<endl;
}