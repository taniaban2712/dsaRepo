#include<bits/stdc++.h>
using namespace std;
int main(){
    int t{0};
    cin>>t;
    while(t--){
        string s="";
        int n{0},max=INT_MIN;
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++){
            int c=int(s[i])-97;
            if(c>max){
                max=c;
            }
        }
        cout<<max+1<<endl;
    }
}