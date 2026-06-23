# 3651-transformed-array

## Solution

```cpp
class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int temp = (i + nums[i]) % n;
            if (temp < 0) temp += n;
            result.push_back(nums[temp]);
        }
        return result;
    }
};

```
