#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
    int n{0};
    cin>>n;
    while(n--){
        string s="";
        cin>>s;
        map<string,int>m;
        if(s.size()%2==0){
            cout<<"NO"<<endl;
            return 0;
        }
        for(int i=1;i<s.length();i++){
            string str=s.substr(0,i);
            for(int j=0;j<str.length();j++){
                
            }
        }
    }
}