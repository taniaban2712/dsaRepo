
class Solution{
  public:
    #include<string>
    string armstrongNumber(int n){
        // code here
        int num{0}, sum{0};
        num=n;
        while(n>0){
            int dig=n%10;
            sum+=dig*dig*dig;
            n/=10;
        }
        if(sum==num){
            return "Yes";
        }
        else{
            return "No";
        }
    }
};