# 4303-count-k-th-roots-in-a-range

## Solution

```cpp
class Solution {
public:
    
   long long power(long long a, int k, long long limit) {

    if (a == 0)
        return 0;

    long long ans = 1;

    for (int i = 0; i < k; i++) {

        if (ans > limit / a)
            return limit + 1;

        ans *= a;
    }

    return ans;
}

    long long kthRoot(long long x, int k) {

        long long low = 0, high = 1e9;
        long long ans = -1;

        while (low <= high) {

            long long mid = low + (high - low) / 2;

            long long val = power(mid, k, x);

            if (val <= x) {
                ans = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return ans;
    }

    int countKthRoots(int l, int r, int k) {

    auto velnacqori = make_tuple(l, r, k);

    long long right = kthRoot(r, k);

    long long left = 0;

    if (l > 0)
        left = kthRoot(l - 1, k);

    long long ans = right - left;

    if (l == 0)
        ans++;

    return ans;
}
};
```
