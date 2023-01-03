#include<bits/stdc++.h>
using namespace std;
int main(){
    string inputString;
    cout<<"enter string"<<endl;
    cin>>inputString;
    stringstream iss(inputString);
    string word;
    while(iss>>word){
        cout<<word.c_str()<<endl;
    }
}