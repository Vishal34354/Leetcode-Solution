# 242-valid-anagram

## Solution

```cpp
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        return false;
        map<char,int>fd;
        for(char c:s)
        fd[c]++;
        for(char c:t)
        fd[c]--;
        for(auto const& [key,value]:fd)
        {
            if(value!=0)
            return false;
        }
        return true;
    }
};
```
