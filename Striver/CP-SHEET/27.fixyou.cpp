    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int t;
        cin>>t;
        while(t--){
            int n,m;
            cin>>n>>m;
            //bool flag=false;
            int count=0;
            vector<vector<char>>v(n, vector<char>(m,0));
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    cin>>v[i][j];
                }
            }
            //Here we need to count the number of Ds in the last row(cannot go further down)
            //number of Rs in the last column(cannot go further right)
            //count is the sum of that and that s the ans, to make the belt functional
            if(n==1){
                for(int i=0;i<m;i++){
                    if(v[0][i]=='D') count++;
                }
            }
            else if(m==1){
                for(int i=0;i<n;i++){
                    if(v[i][0]=='R') count++;
                }
            }
            else{
                for(int i=0;i<n;i++){
                    if(v[i][m-1]=='R') count++;
                }
                for(int i=0;i<m;i++){
                    if(v[n-1][i]=='D') count++;
                }
            }
            cout<<count<<endl;       
        }
    }