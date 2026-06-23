# 3447-clear-digits

## Solution

```cpp
class Solution {
public:
    string clearDigits(string s) {
         string result;
        for (char ch : s) {
            if (ch >= '0' && ch <= '9') {
                if (!result.empty()) {
                    result.pop_back(); 
                }
            } else {
                result.push_back(ch); 
            }
        }
        return result;
    }
};
```
