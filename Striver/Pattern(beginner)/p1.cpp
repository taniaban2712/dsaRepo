/*

*****
****
***
**
*

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;//number of rows.
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<"*";
        }
        for(int k=1;k<=n;k++){
            cout<<" ";
        }
        cout<<" "<<endl;
    }
}