/*
12345
1234
123
12
1
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,c;
    cin>>n;//number of rows.
    for(int i=1;i<=n;i++){
        c=1;
        for(int j=n;j>=i;j--){
            cout<<c;
            c++;
        }
        for(int k=1;k<=n;k++){
            cout<<" ";
        }
        cout<<" "<<endl;
    }
}