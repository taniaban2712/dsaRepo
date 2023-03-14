#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s="";
    cin>>s;
    int count=0;
    for(int i=n-1;i>=0;i--){
        int q=int(s[i])-48;
        if(q%2==0) count+=(i+1);
        //as all the substr from 0 to i are included.
    }
    cout<<count<<endl;
}