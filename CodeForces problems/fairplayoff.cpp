#include<bits/stdc++.h>
using namespace std;
int main(){
    int t{0};
    cin>>t;
    while(t--){
       vector<int>v;
       for(int i=0;i<4;i++){
        int num=0;
        cin>>num;
        v.push_back(num);
       }
       int x=max(v[0],v[1]);
       int y=max(v[2],v[3]);
       sort(v.begin(),v.end());
       if((x==v[2]&&y==v[3])||(x==v[3]&&y==v[2])){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
}