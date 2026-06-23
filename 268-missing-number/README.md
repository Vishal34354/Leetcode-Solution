# 268-missing-number

## Solution

```cpp
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long n = nums.size();
        long long total = n * (n + 1) / 2;
        long long sum = 0;
        for (int x : nums) sum += x;
        return (int)(total - sum);
    }
};

```
