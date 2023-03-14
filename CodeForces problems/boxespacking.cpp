#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    vector<int>box(n,0);
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>box[i];
        mp[box[i]]++;
    }
    sort(box.begin(),box.end());
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=i+1;j--){
            //cout<<box[i]<<" "<<box[j]<<endl;
            //cout<<mp[box[i]]<<" "<<mp[box[j]]<<endl;
            if(box[i]<box[j]&&mp[box[i]]>0&&mp[box[j]]>0){
                mp[box[i]]--;
                //cout<<mp[box[i]]<<" "<<mp[box[j]]<<endl;
                //cout<<box[i]<<" "<<box[j]<<endl;
                break;
            }
            //cout<<mp[box[i]]<<" "<<mp[box[j]]<<endl;
            //cout<<box[i]<<" "<<box[j]<<endl;
        }
    }
    for(auto it:mp) count+=it.second;
    cout<<count<<endl;
}