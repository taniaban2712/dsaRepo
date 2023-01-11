#include<bits/stdc++.h>
using namespace std;

vector<int> bina(int n){
    vector<int>v;
        while(n>0){
            v.push_back(n%2);
            n/=2;
        }
        reverse(v.begin(),v.end());
        return v;
}

int main(){
    int t{0};
    cin>>t;
    while(t--){
        int start{0},ans{0};
        bool flag=true;
        cin>>start>>ans;
        vector<int>answ;
        while(true){
            vector<int>bin1=bina(start);
            vector<int>bin2=bina(start+1);
            int new{0};
            if(bin1.size()!=bin2.size()){
                flag=false;
                break;
            }
            for(int i=0;i<bin1.size();i++){
                if(bin1[i]==1&&bin2[i]==1){
                    answ.push_back(1);
                }
                else{
                    answ.push_back(0);
                }
            }
            for(int i=answ.size();i>0;i--){
                new+=pow(2,i)*answ(answ.size()-i+1);
            }
        }
    }
}