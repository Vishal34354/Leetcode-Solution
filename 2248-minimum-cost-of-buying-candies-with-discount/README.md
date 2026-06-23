# 2248-minimum-cost-of-buying-candies-with-discount

## Solution

```cpp
class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n=cost.size();
       sort(cost.begin(), cost.end());
       int sum=0;
       int y=n%3;
       int t=n/3;
       for(int i=n-1;t>0;){
        sum=sum+cost[i]+cost[i-1];
        t--;
        i=i-3;
    }
     for(int i=0;y>0;i++){
    sum+=cost[i];
    y--;
     }
    return sum;
    }
};
```
