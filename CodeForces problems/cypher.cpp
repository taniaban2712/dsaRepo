#include<bits/stdc++.h>
using namespace std;
int main(){
    int t{0};
    cin>>t;
    while(t--){
        vector<int>v;
        int n{0};
        cin>>n;
        for(int i=0;i<n;i++){
            int a{0};
            cin>>a;
            v.push_back(a);
        }
        int count=0;
        while(n--){
            int num{0};
            cin>>num;
            string s="";
            cin>>s;
            for(int i=0;i<num;i++){
                if(s[i]=='D'){
                    v[count]++;
                    if(v[count]>9){
                        v[count]-=10;
                    }
                   
                }
                else{
                    v[count]--;
                    if(v[count]<0){
                        v[count]+=10;
                    }
                  
                }
            }
           count++;
        }
         for(auto it:v){
                cout<<it<<" ";
            }
            cout<<" "<<endl;
    }
}