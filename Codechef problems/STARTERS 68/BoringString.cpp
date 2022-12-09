#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n{0},leng{0};
        cin>>n;
        string s="";
        cin>>s;
        string bor="";
        for(int i=0;i<n;i++){
            char c=s[i];
            bor+=c;
            for(int j=i;j<n;j++){
                if(c==s[j]){
                    bor+=s[j];
                }
                else{
                    continue;
                }
            }
            if(bor.length()>leng){
                leng=bor.length();//for longest
            }
        }
        cout<<leng<<endl;
        
    }
}