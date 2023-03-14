#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,no=0,p=0;
        cin>>n;
        vector<int>v(n,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]<0) no++;
            else p++;
        } 
        //for maximum likes
        int sum=0;
        for(int i=0;i<n;i++){
            if(i<p) sum++;
            else if(i>=p&&i<=no+p) sum--;
            cout<<sum<<" ";
        }
        cout<<" "<<endl;
        //for minimum likes
        sum=0;
        for(int i=0;i<n;i++){
            //cout<<p<<" "<<no<<endl;
            if(p>0&&no>0){
                if(i%2==0){
                sum++;
                p--;
                }
                else{
                    sum--;
                    no--;
                }
            }
            else if(p<=0&&no>=0){
                sum--;
                no--;
            }
            else{
                sum++;
                p--;
            }
            if(sum<0) sum=0;
            //cout<<p<<" "<<no<<endl;
            cout<<sum<<" ";
        }
        cout<<" "<<endl;
    }
}