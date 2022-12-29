#include<bits/stdc++.h>
using namespace std;

int n{0};

void f(int i, int j){
    if(n<1){
        return;
    }
    n--;
    cout<<i<<endl;
    f(j,i+j);
}

int main(){
    cin>>n;
    f(0,1);
}