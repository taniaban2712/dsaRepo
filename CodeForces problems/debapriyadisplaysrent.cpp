#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    vector<int>s(t,0);
    vector<int>c(t,0);
    for(int i=0;i<t;i++)    cin>>s[i];
    for(int i=0;i<t;i++)    cin>>c[i];
    int minsum=INT_MAX;
    //bool flag=false;
    for(int i=0;i<t;i++){
        int start=i+1;
        int end=t-1;
        while(start<=end){
            if(s[i]!=s[start]&&s[start]!=s[end]&&s[end]!=s[i]){
                //flag=true;
                if(c[i]+c[start]+c[end]<=minsum){
                    minsum=c[i]+c[start]+c[end];
                    end--;
                }
            }
            else{
                start++;
            }
        }
    }
    if(minsum==INT_MAX) cout<<-1<<'\n';
    else cout<<minsum<<endl;
}