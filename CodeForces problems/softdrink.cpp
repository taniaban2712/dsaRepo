#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
    int n{0},k{0},l{0},c{0},d{0},p{0},nl{0},np{0},ans{0};
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int f=k*l;//total amount of liquid
    int minf=f/nl;//amount of liquid per person
    int lime=d*c;//total number of lime slices
    int salt=p/np;//amount of salt per person
   vector<int>v;
   v.push_back(minf);
   v.push_back(lime);
   v.push_back(salt);
   sort(v.begin(),v.end());
   ans=v[0]/n;
    cout<<ans<<endl;
}