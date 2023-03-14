    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            string s="";
            cin>>s;
            string check="FBFFBFFBFBFFBFFBFBFFBF";
            int chk=check.find(s);
            if(chk==-1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
            
        }
    }

