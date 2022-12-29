#include<bits/stdc++.h>
using namespace std;

int n{0};
string nm="";

void name(int i, int n){
    if(i>n){
        return;
    }
    cout<<nm<<endl;
    name(i+1,n);
}

int main(){
    cin>>n;
    cin>>nm;
    name(1,n);
}