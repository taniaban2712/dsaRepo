#include<bits/stdc++.h>
using namespace std;

string s="";
int n{0};

bool f(int i){
    if(i>=n/2){
        return true;
    }
    if(s[i]!=s[n-i-1]){
        return false;
    }
    return f(i+1);
}

int main(){
    cin>>s;
    n=s.length();
    if(f(0)){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;
    }
}