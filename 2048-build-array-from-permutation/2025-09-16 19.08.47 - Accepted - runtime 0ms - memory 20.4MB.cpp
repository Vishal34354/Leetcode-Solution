class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int a= nums.size();
      vector<int> result(a);
    for(int i=0;i<a;i++){
        result[i]=nums[nums[i]];
    }
    return result;
    }
};