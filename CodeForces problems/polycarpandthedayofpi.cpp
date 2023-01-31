#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
    long long int t{0};
    cin>>t;
    while(t--){
        string s="314159265358979323846264338327";
        string a;
        cin>>a;
        int count{0};
        for(int i=0;i<a.size();i++){
            if(s[i]==a[i]){
                count++;
            }
            else{
                break;
            }
        }
        cout<<count<<endl;
    }
}