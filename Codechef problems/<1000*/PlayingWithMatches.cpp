#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a{0},b{0},count{0};
        cin>>a>>b;
        int sum=a+b;
        while(sum>0){
            int dig=sum%10;
            if(dig==1){
                count+=2;
            }
            else if(dig==7){
                count+=3;
            }
            else if(dig==4){
                count+=4;
            }
            else if(dig==2||dig==3||dig==5){
                count+=5;
            }
            else if(dig==0||dig==6||dig==9){
                count+=6;
            }
            else{
                count+=7;
            }
            sum/=10;
        }
        cout<<count<<endl;
    }
}