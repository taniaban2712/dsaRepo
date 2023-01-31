#include<bits/stdc++.h>
using namespace std;
int main(){
    int t{0};
    cin>>t;
    while(t--){
        int w{0},d{0},h{0};
        int a{0},b{0},f{0},g{0},c1{0},c2{0};
        cin>>w>>d>>h;
        cin>>a>>b>>f>>g;
        c1=h+abs(a-f)+min(g+b,2*d-g-b);
        c2=h+abs(b-g)+min(a+f,2*w-a-f);
        cout<<min(c1,c2)<<endl;
    }
}