class Solution {
public:
    bool isGood(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size()-1;i++){
        if(i+1==nums[i])
        continue;
        return false;
       }
       if(nums[nums.size()-1]==nums.size()-1)
       return true;
       return false;

    }
};