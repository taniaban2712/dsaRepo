#include<bits/stdc++.h>
using namespace std;
int main(){
    int n{0};
    cin>>n;
    while(n--){
        int f{0};
        bool flag=false;
        cin>>f;
        string s="",s1="Timur";
        cin>>s;
        sort(s1.begin(),s1.end());
            if(s.length()!=5){
                flag=false;
            }
            else{
                sort(s.begin(),s.end());
                if(s==s1){
                    flag=true;
                }
                else{
                    flag=false;
                } 
        }
        if(flag==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}