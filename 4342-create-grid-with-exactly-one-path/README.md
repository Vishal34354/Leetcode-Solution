# 4342-create-grid-with-exactly-one-path

## Solution

```cpp
class Solution {
public:
    vector<string> createGrid(int m, int n) {
        string temp(n,'.');
        vector<string> ans(m,temp);
        for(int i=1;i<m;i++){
            for(int j=0;j<n-1;j++){
                ans[i][j]='#';
            }
        }
        return ans;
    }
};
```
