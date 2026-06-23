class Solution {
public:
    bool isUgly(int n) {
        if(n<=0)
        return false;
        int i=2;
        while(n%i==0){
             n=n/i;
            if(n==1)
                return true;
        }
        i=3;
        while(n%i==0){
             n=n/i;
            if(n==1)
                return true;
        }
      i=5;
        while(n%i==0){
             n=n/i;
            if(n==1)
                return true;
        }
        if(n==1)
            return true;
         return false;
            
        }
};