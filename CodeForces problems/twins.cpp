#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mincount=INT_MIN;
    vector<int>v(n,0);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        int sum1=0,sum2=0, count=0;
        for(int j=0;j<=i;j++){
            count++;
            sum1+=v[j];
        }
        sum2=sum-sum1;
        //cout<<sum2<<" "<<sum1<<" ";
        if(sum1>sum2&&(sum1-sum2<=v[0])){
            if(count>mincount) mincount=count;
        }
        if(mincount==INT_MIN) mincount=count+1;
        else continue;
    }
    cout<<mincount<<endl;
}