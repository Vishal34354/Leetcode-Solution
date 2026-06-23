# 3676-smallest-number-with-all-set-bits

## Solution

```cpp
class Solution {
public:
    int smallestNumber(int n) {
       int x=1;
       while(1){
        if(pow(2,x)-1>=n)
        break;
        x++;
       }
    return pow(2,x)-1;
    }
};
```
