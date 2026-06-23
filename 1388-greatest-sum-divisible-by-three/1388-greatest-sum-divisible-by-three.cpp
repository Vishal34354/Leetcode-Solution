#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        const long long NEG = LLONG_MIN/4;
        long long dp[3] = {0, NEG, NEG};
        for (int x : nums) {
            int r = x % 3;
            long long ndp[3];
            for (int i = 0; i < 3; ++i) ndp[i] = dp[i];
            for (int i = 0; i < 3; ++i) {
                int j = (i + r) % 3;
                ndp[j] = max(ndp[j], dp[i] + x);
            }
            for (int i = 0; i < 3; ++i) dp[i] = ndp[i];
        }
        return (int)max(0LL, dp[0]);
    }
};
