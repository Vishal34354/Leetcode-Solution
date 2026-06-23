# 1548-check-if-all-1s-are-at-least-length-k-places-away

## Solution

```cpp
class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int count = k;
        for (int i : nums) {
            if (i == 0) count++;
            else {
                if (count < k) return false;
                count = 0;
            }
        }
        return true;
    }
};

```
