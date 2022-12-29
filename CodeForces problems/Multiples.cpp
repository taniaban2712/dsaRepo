#include<bits/stdc++.h>
using namespace std;
int main(){
    int a{0},b{0};
    cin>>a>>b;
    if(a%b==0 || b%a==0){
        cout<<"Multiples"<<endl;
    }
    else{
        cout<<"No Multiples"<<endl;
    }
}