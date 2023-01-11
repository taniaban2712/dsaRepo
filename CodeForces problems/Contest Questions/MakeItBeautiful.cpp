#include<bits/stdc++.h>
using namespace std;

/*Here the catch was, that if we print the array in sorted decreasing order, then there will no ugly arrays whatsoever.
So, if the array has unique elements, then use the sorting in backward way.
Else, if the array has common elements, then swap the elements in a way that, they stay behind and they dont sum up to the number.

If all the elements are same, then it can never be beautiful.
*/
int solve(){
    int n{0};
    cin>>n;
    vector<int>v(n);
    map<int,int>m;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
    for(int i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]++;
    }
    if(m.size()==1){
        cout<<"NO"<<endl;
    }
    else{
        vector<int>ans1,ans2;
        for(auto x:m){
        ans1.push_back(x.first);
        for(int i=2;i<=x.second;i++){
            ans2.push_back(x.first);
            }
        }
    reverse(ans1.begin(),ans1.end());
    cout<<"YES"<<endl;
    for(auto x:ans1){
        cout<<x<<" ";
    }
    for(auto x:ans2){
        cout<<x<<" ";
    }
    cout<<endl;
    }
    return 0;
}
int main(){
    int t{0};
    cin>>t;
    while(t--){
        solve();
    }
}