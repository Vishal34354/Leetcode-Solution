class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int Amt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
            if(Amt<count)
              Amt=count;
              count=0;
            }
            else 
            count++;
        }
        if(Amt>count)
        count=Amt;
        return count;
    }
};