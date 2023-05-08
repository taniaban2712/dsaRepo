#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="";
    cin>>s;
    //not completed yet
    string hr=s.substr(0,2);
    string mn=s.substr(3,5);
    //cout<<hr<<" "<<min<<endl;
    int hh=stoi(hr);
    int mm=stoi(mn);
    int revm=(mm%10)*10+(mm/10);
    if(hh==revm){
        cout<<"0"<<endl;
        return 0;
    }
    int revh=(hh%10)*10+(hh/10), minmm=0,minhh=0;
    hh=stoi(hr);
    mm=stoi(mn);
    //cout<<revh<<" "<<revm<<endl;
    
}