# 1630-count-odd-numbers-in-an-interval-range

## Solution

```cpp
class Solution {
public:
    int countOdds(int low, int high) {
      int count=0;
      int num=high-low+1;
      if(low%2==0 || high%2==0)
        count=num/2;
      else
       count=num/2+1;
       return count;
    }
};
```
