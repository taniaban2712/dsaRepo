/*

     *
    ***
   *****
  *******
 *********
  *******
   *****
    ***
     *

 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<+n;i++){
        //the upper part of the triangle
        for(int j=n;j>=i;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        for(int l=1;l<i;l++){
            cout<<"*";
        }
        cout<<" "<<endl;
    }
    for(int i=1;i<=n;i++){
        //the lower part of the triangle
        for(int m=1;m<=i;m++){
            cout<<" ";
        }
        for(int p=n;p>=i;p--){
            cout<<"*";
        }
        for(int q=n;q>i;q--){//here there is a less than sign instead of less than equal to, so that there is not an extra line. 
            cout<<"*";
        }
        cout<<" "<<endl;
    }  
}