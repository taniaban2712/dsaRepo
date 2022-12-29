#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x{0},y{0},k{0}, count{0};
        cin>>x>>y>>k;
        while(x!=y){
            if(x<y){
                if(y-x>=k){
                    x+=k;
                    count++;
                }
                else{
                    x=y;
                    count++;
                }
            }
            else{
                 if(x-y>=k){
                    y+=k;
                    count++;
                }
                else{
                    y=x;
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}