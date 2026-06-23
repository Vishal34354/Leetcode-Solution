class Solution {
public:
    int countPartitions(vector<int>& nums, int k) {
        const long long MOD = 1000000007;
        int n = nums.size();
        vector<long long> dp(n+1), pref(n+1);
        dp[0] = 1;
        pref[0] = 1;

        deque<int> maxd, mind;
        int L = 0;

        for (int r = 0; r < n; ++r) {
            while (!maxd.empty() && nums[maxd.back()] <= nums[r]) maxd.pop_back();
            maxd.push_back(r);
            while (!mind.empty() && nums[mind.back()] >= nums[r]) mind.pop_back();
            mind.push_back(r);

            while (nums[maxd.front()] - nums[mind.front()] > k) {
                if (maxd.front() == L) maxd.pop_front();
                if (mind.front() == L) mind.pop_front();
                L++;
            }

            long long sum = pref[r] - (L > 0 ? pref[L-1] : 0);
            sum = (sum % MOD + MOD) % MOD;
            dp[r+1] = sum;
            pref[r+1] = (pref[r] + dp[r+1]) % MOD;
        }

        return dp[n];
    }
};