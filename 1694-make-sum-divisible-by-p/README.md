# 1694-make-sum-divisible-by-p

## Solution

```cpp
class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size();
        long long total = 0;
        for (int x : nums) total += x;

        int target = total % p;
        if (target == 0) return 0;

        unordered_map<int, int> last;
        last[0] = -1;

        long long prefix = 0;
        int ans = n;

        for (int i = 0; i < n; ++i) {
            prefix = (prefix + nums[i]) % p;
            int cur = (int)prefix;
            int need = (cur - target + p) % p;

            if (last.find(need) != last.end()) {
                ans = min(ans, i - last[need]);
            }

            last[cur] = i;
        }

        return ans == n ? -1 : ans;
    }
};

```
