#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s, str="abcdefghijklmnoqrstuvwxyz";
        int n{0}, flag{1};
        cin>>n;
        cin>>s;
        if(n%2==0){
            int count=0;
            for(int i=0;i<26;i++){
                char c=str[i];
                for(int j=i;j<n;j++){
                    if(c==s[j]){
                        count++;
                    }
                }
                if(count%2!=0){
                    flag=0;//not even number of letters
                    break;
                }
                count=0;
            }
        }
        else{
            flag=0;
        }
        if(flag==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}