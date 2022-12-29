#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n{0}, max{0};
        cin>>n;
        int a[n],b[n],fin[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            cin>>b[i];
            fin[i]=(a[i]*20)-(b[i]*10);
            if(fin[i]<0){
                fin[i]=0;
            }
            if(fin[i]>max){
                max=fin[i];
            }
        }
        cout<<max<<endl;
    }
}