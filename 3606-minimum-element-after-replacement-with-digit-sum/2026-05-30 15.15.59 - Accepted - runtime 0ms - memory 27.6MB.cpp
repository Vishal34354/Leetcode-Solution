class Solution {
public:
    int sum(int num){
        int sum=0;
        while(num!=0){
            int digit=num%10;
            sum+=digit;
            num/=10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
     for(int i=0;i<nums.size();i++){
        nums[i]=sum(nums[i]);
     }
     int min=nums[0];
     for(int i=1;i<nums.size();i++){
        if(min>nums[i])
        min=nums[i];
     }
      return min;
    }
};