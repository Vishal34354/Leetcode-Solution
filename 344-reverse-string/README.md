# 344-reverse-string

## Solution

```cpp
class Solution {
public:
    void reverseString(vector<char>& s) {
        char *x=&s[0];
        char *y=&s[s.size()-1];
       while(x<y){
        swap(*x,*y);
        x++;
        y--;
       }
    }
};
```
