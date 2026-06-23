# 3704-count-partitions-with-even-sum-difference

## Solution

```cpp
class Solution {
public:
    int countPartitions(vector<int>& nums) {
      int sum= accumulate(nums.begin(),nums.end(),0);
      int count=0;
      int r=0;
        for(int i=0;i<nums.size()-1;i++){
            sum=sum-nums[i];
            r=r+nums[i];
            int t=r-sum;
            if(t%2==0)
            count++;
        }
        return count;
    }
};
```
