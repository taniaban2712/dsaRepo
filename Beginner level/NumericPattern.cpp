#include<iostream>
#include<string>
using namespace std;
int main(){
    int n=0;
    cout<<"Enter number of terms:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1; k<=j;k++){
                cout<<j<<" ";
            }
            cout<<" "<<endl;
        }
        cout<<" "<<endl;
    }
}
