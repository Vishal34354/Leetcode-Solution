# 2112-minimum-difference-between-highest-and-lowest-of-k-scores

## Solution

```cpp
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if (k <= 1) return 0;

        sort(nums.begin(), nums.end());

        int ans = INT_MAX;
        for (int i = 0; i + k - 1 < nums.size(); i++) {
            ans = min(ans, nums[i + k - 1] - nums[i]);
        }
        return ans;
    }
};

```
