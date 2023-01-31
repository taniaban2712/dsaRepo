#include<bits/stdc++.h>
using namespace std;
int main(){
    int t{0};
    cin>>t;
    while(t--){
        vector<int>likes;
        vector<int>comments;
        int n{0};
        cin>>n;
        for(int i=0;i<n;i++){
            int a{0};
            cin>>a;
            likes.push_back(a);
        }
        for(int i=0;i<n;i++){
            int a{0};
            cin>>a;
            comments.push_back(a);
        }
        int maxnum=*max_element(likes.begin(),likes.end());
        map<int,vector<int>>m;
        for(int i=0;i<n;i++){
            m[likes[i]].push_back(comments[i]);
        }
        int maxcom=*max_element(m[maxnum].begin(),m[maxnum].end());
        for(int i=0;i<n;i++){
            if(comments[i]==maxcom){
                cout<<i+1<<endl;
                break;
            }
        }
    }
}