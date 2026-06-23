# 3886-count-number-of-trapezoids-i

## Solution

```cpp
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1000000007LL;

class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        unordered_map<int,ll> freq;
        for(auto &p: points) freq[p[1]]++;
        ll tot = 0, sq = 0;
        for(auto &kv: freq){
            ll c = kv.second;
            ll v = c * (c - 1) / 2;
            tot = (tot + v) % MOD;
            sq = (sq + (v % MOD) * (v % MOD)) % MOD;
        }
        ll inv2 = (MOD + 1) / 2;
        ll ans = (( (tot * tot) % MOD - sq + MOD) % MOD) * inv2 % MOD;
        return (int)ans;
    }
};

```
