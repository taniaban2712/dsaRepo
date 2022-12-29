#include<bits/stdc++.h>
using namespace std;

int main(){
    int t{0};
    cin>>t;
    while(t--){
        int n{0}, s{0};
        cin>>n>>s;
        int maxdiff{0};
        for(int i=0;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                if(i+j==s){
                    if(i-j>maxdiff){
                        maxdiff=i-j;
                    }
                    else if(j-i>maxdiff){
                        maxdiff=j-i;
                    }
                    else{
                        continue;
                    }
                }
                else{
                    continue;
                }
            }
        }
        cout<<maxdiff<<endl;
    }
}