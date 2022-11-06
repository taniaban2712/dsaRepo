/*

1      1
12    21
123  321
12344321

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a;
    cin>>n;
    for(int i=1;i<=n;i++){
        //the left triangle
        for(int j=1;j<=i;j++){
            cout<<a;
            a++;
        }
        //the space triangle
        for(int k=n;k>i;k--){
            cout<<" ";
        }
        for(int l=n;l>i;l--){
            cout<<" ";
        }
        //the right triangle
        for(int m=1;m<=i;m++){
            cout<<a;
            a--;
        }
        cout<<" "<<endl;
    }
}