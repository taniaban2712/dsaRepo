#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,b,d;
    cin>>n>>b>>d;
    vector<int>fruit(n,0);
    for(int i=0;i<n;i++) cin>>fruit[i];
    int sum=0,count=0;
    for(int i=0;i<n;i++){
        if(fruit[i]>b) continue;
        else  sum+=fruit[i];
        if(sum>d){
            count++;
            sum=0;
        }
    }
    cout<<count<<'\n';
}