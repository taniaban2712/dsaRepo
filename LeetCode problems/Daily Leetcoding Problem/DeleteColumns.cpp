#include<bits/stdc++.h>
using namespace std;


    int minDeletionSize(vector<string>& strs) {
        int m=strs[0].length();
        int n=strs.size();
        int count{0};
        for(int i=0;i<m;i++){
            string currcoll="";
            for(int j=0;j<n;j++){
                currcoll+=strs[j][i];
            }
            string revcoll=currcoll;
            sort(currcoll.begin(),currcoll.end());
            if(revcoll!=currcoll){
                count++;
        }
        return count;
    }
    }
int main(){
    vector<string>str;
    int n{0};
    cin>>n;
    for(int i=0;i<n;i++){
        string st="";
        cin>>st;
        str.push_back(st);
    }
    cout<<minDeletionSize(str)<<endl;
}
