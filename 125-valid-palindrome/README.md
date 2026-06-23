# 125-valid-palindrome

## Solution

```cpp
class Solution {
public:
    bool isPalindrome(string s) {
        string result="";
        for(char c:s)
        { if((c>='a'&& c<='z') || (c>='A'&& c<='Z')||(c >= '0' && c <= '9'))
         result+=tolower(c);
        }  
        string test=result;
        reverse(result.begin(), result.end());
        return (result==test);
  }
};
```
