# 7-reverse-integer

## Solution

```cpp
#include <climits>

class Solution {
public:
    int reverse(int x) {
        int revNum = 0;
        int pop = 0;

        while(x != 0){
            pop = x % 10 ;
            x = x/10;
            if ((revNum  > INT32_MAX /10 ) || ((revNum == INT32_MAX /10) && pop > 7)){
                return 0;
            }
            if ((revNum  < INT32_MIN /10 ) || ((revNum == INT32_MIN /10) && pop <-8)){
                return 0;
            }
            revNum = revNum * 10 + pop;
        }
        return revNum;
    }
};
```
