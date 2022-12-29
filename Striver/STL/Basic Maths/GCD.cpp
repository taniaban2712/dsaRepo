#include<bits/stdc++.h>
using namespace std;
int main(){
    int a{0},b{0};
    cin>>a>>b;
    int max{0};
    if(a<b){
        for(int i=1;i<=a;i++){
            if(a%i==0&&b%i==0){
                if(i>max){
                    max=i;
                }
            }
        }
        cout<<max<<endl;
    }
    else{
        for(int i=1;i<=b;i++){
            if(a%i==0&&b%i==0){
                if(i>max){
                    max=i;
                }
            }
        }
        cout<<max<<endl;
    }
}