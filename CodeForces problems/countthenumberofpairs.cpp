    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int t;
        cin>>t;
        while(t--){
            int n,k;
            cin>>n>>k;
            string s="";
            cin>>s;
            vector<int>up(26,0),low(26,0);
            for(int i=0;i<n;i++){
                if(isupper(s[i])) up[int(s[i])-65]++;
                else low[int(s[i])-97]++;
            }
            int ans=0;
            for(int i=0;i<26;i++){
                ans+=min(up[i],low[i]);
                int x=abs(up[i]-low[i])/2;
                ans+=min(k,x);
                k-=min(k,x);
            }
            cout<<ans<<endl;
        }
    }