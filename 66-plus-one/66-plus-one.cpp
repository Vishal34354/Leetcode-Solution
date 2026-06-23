class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;
        int carry=0;
        digits[n] +=1;
        carry=digits[n]/10;
        while(carry){
            if(n==0)
            break;
            digits[n]=digits[n]%10;
            digits[n-1] +=carry;
            carry=digits[n-1]/10;
            n--;
        }
        if(carry){
            digits[0]%=10;
           digits.insert(digits.begin(),carry);
        }
        return digits;
    }
};