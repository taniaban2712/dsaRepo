class Solution {
public:
    int reverse(int x) {
        long dig{0},num{0}, orgn{0};
        orgn=x;
        if(x<2147483647 || x>-2147483648){
        if(x>0){
          while(x>0){
            dig=x%10;
            num=num*10+dig;
            x/=10;
          }
        
           if(num>2147483647 || num<-2147483648){
            return 0;
           }
           else{
           return num;
           }
        }
        else{
            x*=-1;
            while(x>0){
               dig=x%10;
               num=num*10+dig;
               x/=10;
            }
             if(num>2147483647 || num<-2147483648){
            return 0;
        }
        else{
            return -num;
        }
        }

        }
    }
};