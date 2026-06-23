# 4305-check-adjacent-digit-differences

## Solution

```cpp
class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        for(int i=1;i<s.size();i++)
            {
                int a=abs(s[i-1]-s[i]);
                if(a<=2)
                 continue;
                else
                    return false;
            }
        return true;
    }
};
```
