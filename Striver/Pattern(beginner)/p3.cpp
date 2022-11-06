/*
    
     *
    ***
   *****
  *******
 *********

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;//number of rows
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        for(int l=1;l<=i;l++){
            if(l==1){
                continue;
            }
            cout<<"*";
        }
        cout<<" "<<endl;
    }
}