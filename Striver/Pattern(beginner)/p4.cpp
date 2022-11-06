/*

 *********
  *******
   *****
    ***
     *

*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int k=n;k>=i;k--){
            cout<<"*";
        }
        for(int l=n;l>i;l--){
            if(l==1){
                continue;
            }
            cout<<"*";
        }
        for(int m=1;m<=i;m++){
            cout<<" ";
        }
        cout<<" "<<endl;
    }
}