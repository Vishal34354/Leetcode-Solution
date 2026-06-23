class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int one=0;
        for(int num:nums){
            one^=num;
        }
        
        return one;
    }
};