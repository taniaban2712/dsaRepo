    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            string s="",temp="";
            cin>>s;
            transform(s.begin(),s.end(),s.begin(),::tolower);
            for(int i=0;i<n;i++){
                if(i==0) temp+=s[i];
                else if(s[i]!=s[i-1]) temp+=s[i];
            }
            if(temp=="meow") cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

