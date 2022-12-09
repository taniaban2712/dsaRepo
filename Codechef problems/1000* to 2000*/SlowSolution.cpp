#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
    int maxt{0}, maxn{0},maxsum{0}, a{0}, iter{0}, b{0};
    cin>>maxt>>maxn>>maxsum;
    if(maxsum%maxn==0){
        a=maxsum/maxn;//worst test case
        for(int j=1;j<=a;j++){
            b=maxsum-maxn;
            iter=b*b;
            maxsum-=maxn;
        }
    }
    else{
        
    }
   }

}